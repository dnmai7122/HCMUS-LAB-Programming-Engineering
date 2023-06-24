#include"Ham5.h"

int TinhC(int k, int n)
{
	if (k == 1)
		return n;
	else if (n == k)
		return 1;
	else
		return TinhC(n - 1, k) + TinhC(n - 1, k - 1);
}