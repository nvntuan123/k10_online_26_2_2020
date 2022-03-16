#include <iostream>

using namespace std;

int main()
{
	//float x, y;
	// Ep kieu trong C.
	//x = 1.0 / 2; // 0.5. Cach ep kieu 1.
	//x = 1 / 2.0; // 0.5. Cach ep kieu 1.
	//x = 1.0 / 2.0; // 0.5. Cach ep kieu 1. Khong ai ranh ma lam cach nay dau nha
	//y = (float)(3) / 2; // 1.5. Cach ep kieu 2.
	//y = 3 / (float)(2); // 1.5. Cach ep kieu 2.
	//y = (float)(3) / (float)(2); // 1.5. Cach ep kieu 2. Khong ai ranh ma lam cach nay dau nha
	//y = (float)(3 / 2); // 1.

	// Ep kieu trong C++.
	//x = static_cast<float>(1) / 2; // Cach 1.
	//x = static_cast<float>(1) / static_cast <float>(2); // Cach 2.
	//x = static_cast<float>(1 / 2); // 0.

	//cout << "x = " << x << endl;
	//cout << "y = " << y << endl;

	// Toan tu tren bit.
	int iA, iB;
	iA = 1;
	iB = 1;
	//bool bCheck = false;

	int iResult = iA & iB;
	cout << "Result: " << iResult;

	cout << endl << "Toan tu &(and)" << endl;
	cout << "true & true: " << (true & true) << endl; // 1
	cout << "true & false: " << (true & false) << endl; // 0
	cout << "false & true: " << (false & true) << endl; // 0
	cout << "false & false: " << (false & false) << endl; // 0

	cout << endl << "Toan tu |(or)" << endl;
	cout << "true | true: " << (true | true) << endl; // 1
	cout << "true | false: " << (true | false) << endl; // 1
	cout << "false | true: " << (false | true) << endl; // 1
	cout << "false | false: " << (false | false) << endl; // 0

	cout << endl << "============XOR============" << endl;
	cout << "0 ^ 0: " << (0 ^ 0) << endl; // 0
	cout << "1 ^ 0: " << (1 ^ 0) << endl; // 1
	cout << "0 ^ 1: " << (0 ^ 1) << endl; // 1
	cout << "1 ^ 1: " << (1 ^ 1) << endl; // 0

	cout << "~5: " << ~5 << endl; // -6

	cout << "5 >> 1: " << (5 >> 1) << endl;
	cout << "5 << 1: " << (1 << 5) << endl; // 32

	unsigned short Color = 1;
	Color <<= 4; // Color = Color << 4;
	cout << "Color <<= " << Color << endl;

	/*bool bCheck = false;

	int iValue;
	cin >> iValue;*/
	int a;
	//a = (1 > 2) ? 2019 : 2020; // 2020.
	//cout << "a = " << a;

	int x, b;
	a = 1;
	b = 3;
	x = (a++, b = b + 2); // Choi hoi bi ac vi cai lam bieng.

	cout << "x = " << x << endl; // 5.
	cout << "a = " << a << endl;

	//int iValue = 9 + 3 * 4 / 2; // Cach 1. Khong nen su dung cach nay.
	int iValue = 9 + ((3 * 4) / 2); // Cach 2. Nen su dung - khi nao lon se bit.
	//int iValue1 = 3 * 2 * 4; // 24
	int iValue1 = (3 * 2) * 4; // 24

	cout << "9 + 3 * 4 / 2 = " << iValue << endl;
	cout << "3 * 2 *4 = " << iValue1;

	int iN, iM;
	iN = 1;
	iM = 3;
	int iSum = iN + iM;

	int iValue2;
	iValue2 = 1 + 2 * 3; // Lam bieng.
	iValue2 = 1 + (2 * 3); // Khong lam bieng.

	cout << endl;
	system("pause");
	return 0;
}
