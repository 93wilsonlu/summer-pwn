from pwn import *

io = remote('localhost', '8302')
# io = process('./pwn_calculator')

for i in range(100):
	a = int(io.recvuntil(' ', drop=True))
	op = io.recvuntil(' ', drop=True).decode()
	b = int(io.recvuntil(' ', drop=True))
	io.recvuntil('?\n')
	
	ans = 0
	if op == '+':
		ans = a + b
	elif op == '-':
		ans = a - b
	elif op == '*':
		ans = a * b
	elif op == '/':
		ans = a // b
		
	io.sendline(str(ans))

io.interactive()
io.close()
