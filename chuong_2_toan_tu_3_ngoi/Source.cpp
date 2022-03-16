#include <iostream>

using namespace std;

int main()
{
	// Nhập vào 2 số nguyên a, b. In ra màn hình kết quả số lớn nhất và nhỏ nhất.

	int iA, iB;
	cout << "Nhap vao a = ";
	cin >> iA;
	cout << "Nhap vao b = ";
	cin >> iB;

	/*int iMax = iA, iMin = iA;
	if (iMax < iB)
	{
		iMax = iB;
		iMin = iA;
	}

	cout << "Max = " << iMax << endl;
	cout << "Min = " << iMin;*/

	/*if (iA > iB)
	{
		cout << "Max = " << iA << endl;
		cout << "Min = " << iB;
	}
	else
	{
		cout << "Max = " << iB << endl;
		cout << "Min = " << iA;
	}*/

	//int iMax = iA > iB ? iA : iB;
	//int iMin = iA < iB ? iA : iB;
	//int iRecon = ((iA > iB ? iA : iB) ? iB : iA); // Cai thi con vua vua.
	//int iCons = (((iA > iB ? iA : iB) ? iB : iA) ? iA : iB); // Cai nay moi choi ac nek nha.
	//int iCons = ((((iA > iB ? iA : iB) ? iB : iA) ? iA : iB) ? iB : iA); // Cai nay moi choi ac nek nha.
	cout << "Max = " << (iA > iB ? iA : iB) << endl; // Qua don gian.
	cout << "Min = " << (iA < iB ? iA : iB); // Qua don gian.

	cout << endl;
	system("pause");
	return 0;
}
