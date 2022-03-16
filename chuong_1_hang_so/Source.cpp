#include <iostream>

#define LUONGNV 215000.5
#define XuatTen(fileName) (cout << fileName);
#define TinhTong(iA, iB) (cout << iA + iB);

using namespace std;

int TinhTongAB(int iA, int iB)
{
	return (iA + iB);
}

int main()
{
	int iValue; // Khai bao 1 bien kieu int.

	cout << "Nhap gia tri cho value = "; // Cau lenh xuat.
	cin >> iValue; // Cau lenh nhap.
	cout << 10 << endl; // endl tuc xuong dong.
	cout << iValue << endl;

	int iValue1 = 5; // Khoi tao 1 bien kieu int co gia tri la 5.
	// 5 => he thap phan(decimel)
	// 0 0 0 0 0 0 0 0  0 0 0 0 0 0 0 0  0 0 0 0 0 0 0 0  0 0 0 0 0 1 0 1 => he nhi phan(binary).
	// 0 0 0 0 0 0 0 0  0 0 0 0 0 0 0 0  0 0 0 0 0 0 0 0  0 0 0 0 1 0 1 0
	//																 2^1 2^0

	// Phan biet hoa thuong.
	int AB; // 2 chu hoa.
	int Ab; // Chu A hoa va b thuong.

	// C++03(C++ ban 2003), C++98(C++ ban 1998), C++11(C++ ban 2011), C++14(C++ ban 2014),...

	int Temp; // Hop le.
	//int 9name; // Khong hop le.
	//int double; // Khong hop le.
	int _Name; // Hop le.
	//int Name-a; // Khong hop le.

	const double iLuong = 19500; // Khi khai bao 1 bien la hang so thi phai khoi tao gia tri cho no lun. Khong khoi se bi loi.

	//iLuong = 200; // Vi bien a la hang so nen khong duoc thay doi => Error.
	int iLNV1 = iLuong * 2;
	//iLuong = 597000;
	int iLNV2 = iLuong * 1;
	int iLNV3 = iLuong * 5;
	int iLNV4 = LUONGNV * 5; // Giam doc.
	//LUONGNV = 595000; // Error.
	int iLNV5 = LUONGNV * 3; // Pho giam doc.
	//iLuong = LUONGNV;

	/*
	define: thi tu nhan kieu du - tuc khong can khai bao kieu du lieu.
	const: bat phai khai bao kieu du lieu.
	*/
	//AmThanh("ABC");
	XuatTen("Tuan\n");

	TinhTong(5, 10);

	cout << endl;
	system("pause");
	return 0;
}
