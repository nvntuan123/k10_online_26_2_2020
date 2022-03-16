#include <iostream> // Thu vien ho tro nhap xuat.

using namespace std;

int main()
{
	//int iValue; // Khai bao. Chua co gia tri
	//cin >> iValue;

	//cout << iValue;

	//int iDay, iMonth, iYear;
	//cin >> iDay >> iMonth >> iYear; // Cach nhap nay khong khuyen cao lam.

	//cout << "Day = " << iDay << ", Month = " << iMonth << ", Year = " << iYear;

	// Cau lenh xuat.
	/*char cArr[] = "Welcome To Be Codeching";
	cout << "Value of cArr: " << cArr << endl;
	cout << "Value of cArr: " << "Welcome To Be Codeching" << endl;
	cout << "Value of cArr: Welcome To Be Codeching" << endl;*/
	//cout << "Value = " + iValue; // Error.

	// Nhung ky tu dac biet.
	//cout << "ABC\n" << "XYZ";
	/*cout << "ABC\tXYZ\n";
	cout << "ABC\nXYZ\\";
	cout << "\a" << endl;
	cout << "\'" << endl;
	cout << "\"" << endl;
	cout << "\?";*/

	// Toan tu gan.
	//int iA, iB, iC, iD;
	//iA = 10; // Bien vs so.
	//iB = iA; // bien vs bien.
	//iC = iA + iB; // Bien vs bieu thuc.
	//iD = iC = iB = iA; // Gan lien tiep.

	/*iA = 5;
	iB = 6;
	iC = 7;
	iA = iB = iC; // 7

	cout << "a = " << iA << endl;
	cout << "b = " << iB << endl;
	cout << "c = " << iC << endl;*/

	// Cach viet ngan gon.
	//int iValue = 5;
	//iValue = iValue + 2; // iValue += 2;
	////iValue += 2; // Cach viet tat day nek.

	//cout << "Value: " << iValue;

	// Toan tu 1 ngoi.
	//int iA, iB;

	//iA = 10;
	//iB = iA++; // Hau to => Gan 10 cho iB roi sau moi tang bien iA len 1 don vi <=> iB = 10, iA = 11.
	////cout << "iB = " << iB << ", iA = " << iA;

	//iB = ++iA; // Tien to => Tang bien iA len 1 don vi roi moi gan 11 cho iB <=> iB = 11, iA = 11.
	//cout << "iB = " << iB << ", iA = " << iA;

	// % la gi ? Tuc chia lay phan du
	// VD: 10 / 6 = 1 du 4 => ket qua la 4.
	int iValue;
	iValue = 10 % 5; // 10 / 5 = 2 du 0 => iValue = 0.
	iValue = 10 % 6; // 10 / 5 = 2 du 0 => iValue = 0.
	iValue = 99 % 7; // 10 / 5 = 2 du 0 => iValue = 0.
	cout << "Value: " << iValue;

	cout << endl; // endl la ky tu xuong dong.
	system("pause");
	return 0;
}
