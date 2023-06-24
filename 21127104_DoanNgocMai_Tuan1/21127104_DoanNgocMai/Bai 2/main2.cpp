#include"Ham2.h"


int main()
{
	float x;
	int luachon;
	int n;
	while (1)
	{
		cout << "\n_________________ MENU _________________";
		cout << "\n1. Tinh S1 = x+x^2+x^3+...+x^n";
		cout << "\n2. Tinh S2 = x^2+x^4+...+x^2n";
		cout << "\n3. Tinh S3 = x+x^3+x^5+...+x^2n+1";
		cout << "\n4. Tinh S4 = 1+1/(1+2)+1/(1+2+3)+...+1/(1+2+3+...+n)";
		cout << "\n5. Tinh S5 = x +X^2/(1+2)+X^3/(1+2+3)+...+x^n/(1+2+3+...+n)";
		cout << "\n6. Tinh S6 = x+x^2/2!+X^3/3!+...+x^n/n!";
		cout << "\n7. Tinh S7 = 1+x^2/2!+x^4/4!+...+x^2n/(2n)!";
		cout << "\n8. Tinh S8 = 1+x+x^3/3!+x^5/5!+...+x^2n+1/(2n+1)!";
		cout << "______________________________________________";
		cout << "\nNhap lua chon ma ban muon: "; cin >> luachon;
		cout << "\nNhap so x va so n: "; cin >> x >> n;	
		if (luachon == 1)
			cout << "\nKet qua S1 = "<<S1(x,n);
		else if (luachon == 2)
			cout << "\nKet qua S2 = " << S2(x,n);
		else if (luachon == 3)
			cout << "\nKet qua S3 = " << S3(x,n);
		else if (luachon == 4)
			cout << "\nKet qua S4 = " << S4(x,n);
		else if (luachon == 5)
			cout << "\nKet qua S5 = " << S5(x, n);
		else if (luachon == 6)
			cout << "\nKet qua S6 = " << S6(x, n);
		else if (luachon == 7)
			cout << "\nKet qua S7 = " << S7(x, n);
		else if (luachon == 8)
			cout << "\nKet qua S8 = " << S8(x, n);
		else cout << "\nLua chon cua ban khong hop le!. Vui long kiem tra lai.";

	}
	return 0;
}
