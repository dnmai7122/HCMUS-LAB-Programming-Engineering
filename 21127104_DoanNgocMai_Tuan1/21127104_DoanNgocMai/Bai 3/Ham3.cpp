#include"Ham3.h"

int Fibonacci(int n)
{
	if (n < 1)
		return -1 ;
	else if (n==1||n == 2)
		return 1 ;
	else // n>1
		return Fibonacci(n - 1) +  Fibonacci(n - 2);
}