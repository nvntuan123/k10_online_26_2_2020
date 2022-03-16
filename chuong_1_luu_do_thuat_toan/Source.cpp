#include <iostream> // Thu vien ho tro nhap xuat trong C++.

using namespace std;

int main()
{
	// B1: Nhap vao hai bien x va y
	int iX, iY;

	cout << "Nhap vao x = ";
	cin >> iX;
	cout << "Nhap vao y = ";
	cin >> iY;

	// B2: Xu ly: tinh A = x * x + y * y.
	int iA = (iX * iX) + (iY * iY);

	// B3: Xuat A.
	cout << "A = x^2 + y^2 = " << iA;

	cout << endl; // Xuong dong.
	system("pause");
	return 0;
}
