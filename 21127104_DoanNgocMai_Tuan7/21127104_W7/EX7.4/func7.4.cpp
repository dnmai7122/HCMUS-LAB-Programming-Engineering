#include"Header7.4.h"
bool isPrime(int x)
{
	int a = x;
	for (int i = 2; i <= x; i++)
	{
		if (a % i == 0)
			return true;
	}
	return false;
}