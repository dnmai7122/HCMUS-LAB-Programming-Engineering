#include"Ham4.h"

int main()
{
	int n;
	int luachon;
	while (1)
	{
		cout << "\n_________________ MENU _________________";
		cout << "\n1. Tinh X";
		cout << "\n2. Tinh Y";
		cout << "______________________________________________";
		cout << "\nNhap lua chon ma ban muon: "; cin >> luachon;
		cout << "Nhap n: "; cin >> n;
		if (luachon == 1)
		{
			cout << "Ket qua cua X la: " << TinhX(n);
		}
		if (luachon == 2)
		{
			cout << "Ket qua cua Y la: " << TinhY(n);
		}
		else cout << "Lua chon cua ban khong hop le! Vui long kiem tra lai.";
	}
	return 0;
}