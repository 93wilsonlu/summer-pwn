from pwn import *

io = remote('localhost', '8301')
# io = process('./intro_pwntools')

io.recvuntil(': ')
s = io.recvline(keepends=False).decode()
s = ''.join(sorted(s))
io.sendline(s)

io.interactive()
