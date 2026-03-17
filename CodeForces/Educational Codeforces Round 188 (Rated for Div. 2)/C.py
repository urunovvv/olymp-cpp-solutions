from math import lcm
def solve(a,b,c,t):
	out = t//a * 6
	out -= t//lcm(a,b) * 3
	out -= t//lcm(a,c) * 3
	out += t//lcm(lcm(b,c),a) * 2
	return out
	
for _ in range(int(input())):
	a,b,c,t = [int(t) for t in input().split()]
	print( solve(a,b,c,t), solve(b,c,a,t), solve(c,a,b,t) )