#include <iostream>

#define LCB 800

using namespace std;

int main()
{
	// Giải phương trình bậc 1 có dạng: ax + b = 0.

	// Input.
	double iA, iB;
	cout << "Nhap a = ";
	cin >> iA;
	cout << "Nhap b = ";
	cin >> iB;

	// Xet a = 0 ?
	if (iA == 0)
	{
		if (iB == 0)
		{
			cout << "Phuong trinh vo so nghiem";
		}
		else
		{
			cout << "Phuong trinh so nghiem";
		}
	}
	else // a != 0
	{
		cout << "x = " << ((-iB) / iA);
	}
	// Giải phương trình bậc 1 có dạng: ax + b = 0.

	/*
	Viết chương trình nhập vào 1 số có 2 chữ số, in ra cách đọc số này.
	VD: 25 => hai muoi lam.
	Nhung truong hop dac biet.
	15: muoi lam => Neu so co 2 chu so va hang chuc la so 1 => muoi lam hoac muoi mot,...
	10 => muoi.
	60: sau muoi => hang don vi la so 0 thi chi sau muoi, bay muoi.
	31: ba muoi mot'
	11: muoi mot
	*/

	int iN;
	cout << "Nhao vao 1 so: ";
	cin >> iN;

	bool bCheck = false; // Mac dinh la khong am.
	if (iN < 0) // La so am.
	{
		iN = -iN; // Bien no thanh so duong.
		bCheck = true; // Am
	}

	int iHangChuc = iN / 10;
	int iHangDonVi = iN % 10;

	// Xet hang chuc truoc.
	/*if (iHangChuc == 1)
		if (iHangDonVi == 0)
			cout << "Muoi";
		else*/

	switch (iHangChuc)
	{
	case 1:
		cout << "Muoi` ";
		break;
	case 2:
		cout << "Hai ";
		break;
	case 3:
		cout << "Ba ";
		break;
	case 4:
		cout << "Bon ";
		break;
	case 5:
		cout << "Nam ";
		break;
	case 6:
		cout << "Sau ";
		break;
	case 7:
		cout << "Bay ";
		break;
	case 8:
		cout << "Tam ";
		break;
	case 9:
		cout << "Chin ";
		break;
	}

	if (iHangChuc != 1 && iHangChuc != 0)
	{
		cout << "muoi ";
	}

	switch (iHangDonVi)
	{
	case 0:
		cout << "Khong";
		break;
	case 1:
		switch (iHangChuc)
		{
		case 0:
		case 1:
			cout << "mot";
			break;
		default:
			cout << "mot'";
		}
		break;
	case 2:
		cout << "hai ";
		break;
	case 3:
		cout << "ba ";
		break;
	case 4:
		cout << "bon ";
		break;
	case 5:
		switch (iHangChuc)
		{
		case 0:
			cout << "nam";
			break;
		default:
			cout << "lam";
			break;
		}
		break;
	case 6:
		cout << "sau ";
		break;
	case 7:
		cout << "bay ";
		break;
	case 8:
		cout << "tam ";
		break;
	case 9:
		cout << "chin ";
		break;
	}

	/*
	1) Nhập vào 4 số nguyên a, b, c, d. In ra màn hình kết quả số lớn nhất và nhỏ nhất.
	*/

	int iA, iB, iC, iD;
	cout << "Nhap a = ";
	cin >> iA;
	cout << "Nhap b = ";
	cin >> iB;
	cout << "Nhap c = ";
	cin >> iC;
	cout << "Nhap d = ";
	cin >> iD;

	int iMax, iMin;
	//iMax = iMin = iA;
	//// Tim max.
	//if (iMax < iB)
	//	iMax = iB;
	//if (iMax < iC)
	//	iMax = iC;
	//if (iMax < iD)
	//	iMax = iD;
	//
	//// Tim min.
	//if (iMin > iB)
	//	iMin = iB;
	//if (iMin > iC)
	//	iMin = iC;
	//if (iMin > iD)
	//	iMin = iD;

	iMax = (((iA > iB ? iA : iB) > iC ? (iA > iB ? iA : iB) : iC) > iD ? ((iA > iB ? iA : iB) > iC ? (iA > iB ? iA : iB) : iC) : iD);
	iMin = (((iA < iB ? iA : iB) < iC ? (iA < iB ? iA : iB) : iC) < iD ? ((iA < iB ? iA : iB) < iC ? (iA < iB ? iA : iB) : iC) : iD);
	cout << endl << "Max = " << iMax << endl;
	cout << endl << "Min = " << iMin << endl;

	/*Giai pt bac 2*/
	double iA, iB, iC;
	cout << "Nhap a = ";
	cin >> iA;
	cout << "Nhap b = ";
	cin >> iB;
	cout << "Nhap c = ";
	cin >> iC;

	if (iA) // Giai pt bac 2 => tinh delta.
	{
		double iDelta = (iB * iB) - (4 * iA * iC);
		if (iDelta == 0) // Pt co nghiem kep.
		{
			cout << "Phuong trinh co nghiem kep x = " << (-iB) / (2 * iA);
		}
		else if (iDelta > 0)
		{
			double iX1 = (-iB + sqrt(static_cast<double>(iDelta))) / (2 * iA);
			double iX2 = (-iB - sqrt(static_cast<double>(iDelta))) / (2 * iA);
			cout << "Phuong trinhf co 2 nghiem x1 = " << iX1 << ", x2 = " << iX2 << endl;
		}
		else // Pt vo nghiem.
		{
			cout << "Phuong trinh vo nghiem." << endl;
		}
	}
	else
	{
		if (iB) // => PT: bx + c = 0
		{
			cout << "Phuong trinh co nghiem x = " << (-iC / iB) << endl;
		}
		else
		{
			if (iC)
			{
				cout << "Phuong trinh vo nghiem." << endl;
			}
			else
			{
				cout << "Phuong trinh vo so nghiem." << endl;
			}
		}
	}
	/*Giai pt bac 2*/

	/*Giai pt bac 4*/
	double iA, iB, iC;
	cout << "Nhap a = ";
	cin >> iA;
	cout << "Nhap b = ";
	cin >> iB;
	cout << "Nhap c = ";
	cin >> iC;

	if (iA) // Giai pt bac 2 => tinh delta.
	{
		double iDelta = (iB * iB) - (4 * iA * iC);
		if (iDelta == 0) // Pt co nghiem kep.
		{
			double iT = (-iB) / (2 * iA);
			if (iT < 0)
			{
				cout << "Phuong trinh vo nghiem." << endl;
			}
			else
			{
				// x^2 = t. <=> x = +- sqrt(t).
				double iX1 = sqrt(iT);
				double iX2 = -iX1;
				cout << "Phuong trinh co nghiem x1 = " << iX1 << ", x2 = " << iX2;
			}
		}
		else if (iDelta > 0)
		{
			double iT1 = (-iB + sqrt(iDelta)) / (2 * iA);
			double iT2 = (-iB - sqrt(iDelta)) / (2 * iA);

			if (iT1 < 0 && iT2 < 0) // Phuong trinh vo nghiem.
			{
				cout << "Phuong trinh vo nghiem." << endl;
			}
			else
			{
				if (iT1 > 0)
				{
					double iX1 = sqrt(iT1);
					double iX2 = -iX1;
					cout << "Phuong trinh co nghiem x = " << iX1 << ", x = " << iX2;
				}

				if (iT2 > 0)
				{
					double iX1 = sqrt(iT2);
					double iX2 = -iX1;
					cout << "Phuong trinh co nghiem x = " << iX1 << ", x = " << iX2;
				}
			}
		}
		else // Pt vo nghiem.
		{
			cout << "Phuong trinh vo nghiem." << endl;
		}
	}
	else
	{
		if (iB) // => PT: bx + c = 0
		{
			if (iC > 0)
			{
				cout << "Phuong trinh vo nghiem." << endl;
			}
			else
			{
				double iX1 = sqrt(-iC / iB);
				double iX2 = -iX1;
				cout << "Phuong trinh co nghiem x1 = " << iX1 << ", x2 = " << iX2 << endl;
			}
		}
		else
		{
			if (iC)
			{
				cout << "Phuong trinh vo nghiem." << endl;
			}
			else
			{
				cout << "Phuong trinh vo so nghiem." << endl;
			}
		}
	}
	/*Giai pt bac 4*/

	/*Nhập vào tháng năm -> tìm tháng có bao nhiu ngày trong năm*/
	int iMonth, iYear;
	cout << "Nhap vao thang: ";
	cin >> iMonth;
	cout << "Nhap vao nam: ";
	cin >> iYear;

	switch (iMonth)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << "Thang co 31 ngay.";
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << "Thang co 30 ngay.";
		break;
	case 2:
		// (4 || 400) && (100)
		if ((!(iYear % 4) || !(iYear % 400)) && (iYear % 100))
		{
			cout << "Thang co 29 ngay.";
		}
		else
		{
			cout << "Thang co 28 ngay";
		}
		break;
	}
	/*Nhập vào tháng năm -> tìm tháng có bao nhiu ngày trong năm*/

	/*Kiem tra so chinh phuong*/
	int iN;
	cout << "Nhap vao n = ";
	cin >> iN;

	if (static_cast<int>(sqrt(iN)) == sqrt(iN))
	{
		cout << iN << " la so chinh phuong.";
	}
	else
	{
		cout << iN << " khong la so chinh phuong.";
	}
	/*Kiem tra so chinh phuong*/

	/*
	4. Viết chương trình tính lương của nhân viên dựa theo thâm niên công
	tác(TNCT) như sau:
	 Nếu TNCT < 12 tháng: hệ số = 1.92.
	 Nếu 12 <= TNCT < 36 tháng: hệ số = 2.34.
	 Nếu 36 <= TNCT < 60 tháng: hệ số = 3.
	 Nếu TNCT >= 60 tháng: hệ số = 4.5.
	*/
	int iTNCT;
	cout << "Nhap vao thap nien cong tac: ";
	cin >> iTNCT;

	double iHS = 1;
	if (iTNCT < 12) // Truong nguoc lai cua if nay la >= 12.
	{
		iHS = 1.92;
	}
	else if (iTNCT < 36)
	{
		iHS = 2.34;
	}
	else if (iTNCT < 60)
	{
		iHS = 3;
	}
	else
	{
		iHS = 4.5; char cKyTu;
	}
	cout << "Luong nhan vien la: " << LCB * iHS;
	/***/

	/*
	Nhập vào 1 ký tự là chữ cái.
	Nếu nhập sai thì thông báo nhập sai.
	Nếu đúng thì đi kiểm tra nếu đang là chữ cái thường thì biến nó thành chữ cái hoa, ngược
	lại đang là chữ cái hoa thì biến nó thành chữ cái thường.
	*/
	char cKyTu;

	cout << "Nhap vao 1 ky tu: ";
	cin >> cKyTu;

	if ((cKyTu >= 65 && cKyTu <= 90) || (cKyTu >= 97 && cKyTu <= 122))
	{
		// Cach 1:
		//if ((cKyTu >= 65 && cKyTu <= 90)) // Ky tu hoa => bien thanh ky tu thuong.
		//{
		//	//cKyTu = cKyTu + 32;
		//	//cKyTu += 32;
		//}
		//else
		//{
		//	//cKyTu = cKyTu - 32;
		//	cKyTu -= 32;
		//}

		// Cach 2:
		cKyTu ^= (1 << 5);
		/*
		64 + 32 = 96
		 0  0  0  0  0  0  0  0
		 0  0  0  0  0  0  0  1
		 0  0  1  0  0  0  0  0 (1 << 5)
		 0  1  1  0  0  0  0  1 (cKyTu)
		 0  1  0  0  0  0  0  1 (cKyTu - Ket qua).
		 => cKytu = 65.
		 Phep ^: 0 ^ 0 = 0
				1 ^ 1 = 0
				1 ^ 0 = 1
				0 ^ 1 = 1
		*/
		cout << "Ky tu nhap vao bien thanh ky tu: " << cKyTu << endl;
	}
	else
	{
		cout << "Nhap sai, vui long vao ky tu la chu cai." << endl;
	}
	/***/

	cout << "\n";
	system("pause");
	return 0;
}
