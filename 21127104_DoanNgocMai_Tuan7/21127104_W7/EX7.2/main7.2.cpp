#include"Header7.2.h"
int main()
{
	//1
	auto x = [](int a, int b) -> int { return a + b; } (10, 50);
	cout << x;
	//2
	int a = 10;
	auto f = [a]() { return a + 10; };
	auto multiply=f();
	cout << multiply;
	//3
	int product = [multiply](int a, int b) -> { return a*b+multiply; }(2, 10);
	cout<<product;
	return 0;
}