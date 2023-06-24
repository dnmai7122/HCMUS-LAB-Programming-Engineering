/*cout << "\n1. Tinh S1 = x+x^2+x^3+...+x^n";
		cout << "\n2. Tinh S2 = x^2+x^4+...+x^2n";
		cout << "\n3. Tinh S3 = x+x^3+x^5+...+x^2n+1";
		cout << "\n4. Tinh S4 = 1+1/(1+2)+1/(1+2+3)+...+1/(1+2+3+...+n)";
		cout << "\n5. Tinh S5 = x +X^2/(1+2)+X^3/(1+2+3)+...+x^n/(1+2+3+...+n)";
		cout << "\n6. Tinh S6 = x+x^2/2!+X^3/3!+...+x^n/n!";
		cout << "\n7. Tinh S7 = 1+x^2/2!+x^4/4!+...+x^2n/(2n)!";
		cout << "\n8. Tinh S8 = 1+x+x^3/3!+x^5/5!+...+x^2n+1/(2n+1)!";*/
#include"Ham2.h"
double S1(float x, int n)
{
	if (n == 1)
		return x;
	else 
		return S1(x, n - 1) + pow(x, n);
}
double S2(float x, int n)
{
	if (n == 1)
		return pow(x,2);
	else 
		return S2(x, n - 1) + pow(x, 2*n);
}
double S3(float x, int n)
{
	if (n == 1)
		return x;
	else 
		return S3(x, n - 1) + pow(x, 2 * n + 1);
}
double S4(int n)
{
	if (n == 1)
		return 1;
	return 1.0 / GiaiThua(n)+S4(n - 1);
}
double Tong(int n)
{
	if (n == 1)
		return 1;
	else return n + Tong(n - 1);
}
double GiaiThua(int n)
{
	if (n == 1)
		return 1;
	else return n * GiaiThua(n - 1);
}
double S5(float x, int n)
{
	if (n == 1)
		return x;
	else return pow(x, n) / Tong(n) + S5(x,n - 1);
}
double S6(float x, int n)
{
	if (n == 1)
		return x;
	else return  pow(x, n) / GiaiThua(n) + S6(x, n - 1);
}

double S7(float x, int n)
{
	if (n==1)
		return 1;
	return (1 + x / n)*S7(x, n  - 1)  - (x / n)* S7(x, n - 2);
}
double S8(float x, int n)
{
	if (n == 1)
		return 1;
	else return pow(x, 2 * n + 1) / GiaiThua(2 * n + 1) + S8(x, n - 1);
}