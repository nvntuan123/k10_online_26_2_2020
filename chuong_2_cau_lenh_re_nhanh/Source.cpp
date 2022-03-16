#include <iostream>

using namespace std;

int main()
{
	/*
	1. Chon cap do.
	2. Thong tin.
	3. Bang diem.
	4. Thoat.
	*/

	int iValue;
	cout << "1. Chon cap do." << endl;
	cout << "2. Thong tin." << endl;
	cout << "3. Bang diem." << endl;
	cout << "4. Thoat." << endl;
	cout << "Moi ban lua chon: ";
	cin >> iValue;

	switch (iValue)
	{
	case 1.5:
		cout << "Level 1" << endl;
		cout << "Level 2" << endl;
		cout << "Level 3";
		break;
	case 2:
		cout << "Day la tro choi thu vi...";
		break;
	case 3:
		cout << "1. Kiet 100" << endl;
		cout << "2. Nam 90" << endl;
		cout << "3. Cuong 10" << endl;
		break;
	case 4:
		system("cls");
		cout << "Thoat";
	}

	// switch du.
	/*
	1. Chon cap do.
	2. Thong tin.
	3. Bang diem.
	4. Thoat.
	*/

	int iValue;
	cout << "1. Chon cap do." << endl;
	cout << "2. Thong tin." << endl;
	cout << "3. Bang diem." << endl;
	cout << "4. Thoat." << endl;
	cout << "Moi ban lua chon: ";
	cin >> iValue;

	switch (iValue) // Cha
	{
	case 1:
		cout << "Level 1" << endl;
		cout << "Level 2" << endl;
		cout << "Level 3";
		break;
	case 2:
		system("cls");
		cout << "Day la tro choi thu vi..." << endl;
		cout << "1. Huong dan choi game." << endl;
		cout << "2. Ngay phat hanh game." << endl;
		cout << "3. Ten nha phat hanh game." << endl;
		cout << "Moi ban chon: ";

		int iValue1;
		cin >> iValue1;

		switch (iValue1) // Con.
		{
		case 1:
			cout << "Bam W la di len, phim A di qua trai, D di qua phai, S di xuong" << endl;
			cout << "Bam nut C thoat ra menu chinh.";
			cout << "Bam nut Esc thoat ra menu chinh.";
			break;
		case 2:
			cout << "Ngay phat hanh game: 11/3/2020" << endl;
			cout << "Ahihi";
			break;
		case 3:
			system("cls");
			cout << "Be Codeching" << endl;
			int iValue2;
			cout << "Nhap dai cai j do di: ";
			cin >> iValue2;

			//bool bCheck = false; // 0
			switch (iValue2) // Chau
			{
			case 69:
				cout << "96";
				break;
			case 96:
				cout << 69;
				break;
			default:
				break;
			}
			break;
		default:
			break;
		}

		break;
	case 3:
		cout << "1. Kiet 100" << endl;
		cout << "2. Nam 90" << endl;
		cout << "3. Cuong 10" << endl;
		break;
	case 4:
		system("cls");
		cout << "Thoat";
		break;
	default:
		cout << "default" << endl;
	}

	//int iValue;
	//printf_s("Nhap vao a = "); // Lenh xuat ben C.
	//scanf_s("%d", &iValue); // Lenh nhap ben C.
	/*
	%d => int.
	%f => so thuc.
	%c => ky tu.
	%s => chuoi ky tu.
	*/
	//bool bCheck;
	//printf_s("a vua nhap vao co gia tri la: %d", iValue);

	//cout << "Nhap vao a = "; // Lenh xuat ben C++.
	//cin >> iValue; // Lenh nhap ben C++.

	//cout << endl;
	printf_s("\n");

	cout << endl;
	system("pause");
	return 0;
}
