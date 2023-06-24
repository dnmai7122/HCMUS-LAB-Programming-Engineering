#include"Ham3.h"

int main()
{
	int n;
	do {
		cout << "Nhap n: ";
		cin >> n;
	} while (n <= 0);

	cout << "Ket qua: " << Fibonacci(n);
	return 0;
}