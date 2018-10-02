#Memoized DP algorithm

memo = {}


def fib(n):
	if n in memo:
		return memo[n]
	else:
		if n<=2:
			return 1
		else:
			f=fib(n-1)+fib(n-2)
			memo[n]=f
			return f

def main():
	n = int(input())
	print(fib(n))
	print(memo)


if __name__ == '__main__':
	main()

