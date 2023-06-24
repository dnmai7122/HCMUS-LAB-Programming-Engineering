#pragma once
#include<iostream>
#include<math.h>
using namespace std;
/*cout << "\n1. Tinh S1 = x+x^2+x^3+...+x^n";
		cout << "\n2. Tinh S2 = x^2+x^4+...+x^2n";
		cout << "\n3. Tinh S3 = x+x^3+x^5+...+x^2n+1";
		cout << "\n4. Tinh S4 = 1+1/(1+2)+1/(1+2+3)+...+1/(1+2+3+...+n)";
		cout << "\n5. Tinh S5 = x +X^2/(1+2)+X^3/(1+2+3)+...+x^n/(1+2+3+...+n)";
		cout << "\n6. Tinh S6 = x+x^2/2!+X^3/3!+...+x^n/n!";
		cout << "\n7. Tinh S7 = 1+x^2/2!+x^4/4!+...+x^2n/(2n)!";
		cout << "\n8. Tinh S8 = 1+x+x^3/3!+x^5/5!+...+x^2n+1/(2n+1)!";*/
double S1(float x, int n);
double S2(float x, int n);
double S3(float x, int n);
double S4(float x, int n);
double S5(float x, int n);
double S6(float x, int n);
double S7(float x, int n);
double S8(float x, int n);
double GiaiThua(int n);
double Tong(int n);

