#include <iostream>

using namespace std;

int main()
{
	/*
	Luu y: nhung truong hop dac biet.
	- Thang 2 la se dua vao nam nhuan va khong nhuan.
	- Dau nam dau thang => ngay 31 thang 12 nam truoc do(ngay, thang, nam truoc do).
							ngay 2 thang 1 nam hien tai(ngay, thang, nam ke tiep).
	- Cuoi nam cuoi thang => ngay 30 thang 12 nam hien tai(ngay, thang, nam truoc do).
							ngay 1 thang 1 nam moi(ngay, thang, nam ke tiep).
	- Dau thang: ngay co the 28, 29, 30, 31 thang --, nam hien tai(ngay, thang, nam truoc do).
				ngay ++, thang hien tai, nam hien tai(ngay, thang, nam ke tiep).
	- Cuoi thang: ngay--, thang hien tai, nam hien tai(ngay, thang, nam truoc do).
				ngay 1 thang ++, nam hien tai(ngay, thang, nam ke tiep).

	1: Input. Nhap ngay thang nam.
	2: Xet Nam > 0?
		2.1: Nam > 0 => B3.
		2.2: Nam < 0 => end.
	3: Xet Ngay > ?
		3.1: Ngay > 0 => B4.
		3.2: Ngay <= => end.
	4: Xet Thang > 0?
		4.1: Thang > 0 => B5.
		4.2: Thang <= 0 => end.
	5: Xet thang?
		Luu y: LastYear, NextYear, Year.
		5.1: Thang 2.
			5.1.1: Nam nhuan => Kiem tra ngay?
				5.1.1.1: Ngay > 29 => end.
				5.1.1.1: Ngay <= 29 => B5.1.3 or B5.1.4.
			5.1.2: Nam khong nhuan => Kiem tra ngay?
				5.1.2.1: Ngay > 28 => end.
				5.1.2.2: Ngay <= 28 => B5.1.3 or B5.1.4.
			5.1.3: Ngay dau thang.
				- Yesterday = 31, LastMonth = Month - 1.
				- Tomorrow = ToDay + 1, NextMonth = Month.
			5.1.4: Ngay cuoi thang.
				5.1.4.1: Nam nhuan.
					5.1.4.1.1: Neu ngay = 28.
						- Yesterday = ToDay - 1, LastMonth = Month.
						- Tomorrow = ToDay + 1, NextMonth = Month.
					5.1.4.1.2: Neu ngay = 29.
						- Yesterday = ToDay - 1, LastMonth = Month.
						- Tomorrow = 1, NextMonth = Month + 1.
				5.1.4.1: Nam khong nhuan.
					- Yesterday = ToDay - 1, LastMonth = Month.
					- Tomorrow = 1, NextMonth = Month + 1.
			5.1.5: Ngay giua thang(thang khong thay doi).
				- LastMonth = NextMonth = Month.
				- Yesterday = ToDay - 1.
				- Tomorrow = ToDay + 1.
		5.2: Thang 3, kiem tra nam nhuan ? Vi ngay truoc do phu thuoc vao thang 2 neu truong hop la ngay dau thang.
			5.2.1: Ngay > 31 => end.
			5.2.2: Xu ly.
				5.2.2.1: Ngay dau thang.
					5.2.2.1.1: nam nhuan
						- Yesterday = 29.
					5.2.2.1.2: nam nhuan
						- Yesterday = 28.
					5.2.2.1.3: cap nhat tiep.
						- Tomorrow = ToDay + 1.
						- LastMonth = Month - 1.
						- NextMonth = Month.
				5.2.2.2: Ngay cuoi thang.
					- Yesterday = ToDay - 1, LastMonth = Month.
					- Tomorrow = 1, NextMonth = Month + 1.
				5.2.3: Ngay giua thang(thang khong thay doi).
					- LastMonth = NextMonth = Month.
					- Yesterday = ToDay - 1.
					- Tomorrow = ToDay + 1.
		5.3: Thang co 31 ngay. Thang 1, 5, 7, 8, 10, 12. Chu y thang 1 va thang 12 nam se thay doi.
			5.3.1: Neu ngay > 31 => end.
			5.3.2: Xu ly.
				5.3.2.1: La ngay dau thang.
					- NextMonth = Month.
					- NextYear = Year.
					- Tomorrow = ToDay + 1.
					5.3.2.1.1: Neu la thang 1.
						- LastYear = Year - 1.
						- LastMonth = 12.
						- Yesterday = 31.
					5.3.2.1.1: Neu khong la thang 1.
						- Yesterday = 30.
						- LastMonth = Month - 1.
				5.3.2.2: La ngay cuoi thang.
					- Tomorrow = 1.
					- LastMonth = Month.
					- Yesterday = ToDay - 1.
					5.3.2.2.1: Neu la thang 12.
						- NextYear = Year + 1.
						- NextMonth = 1.
					5.3.2.2.2: Khong la thang 12.
						- NextMonth = Month + 1.
		5.4: Thang co 30 ngay. Thang 4, 6, 9, 11.
			5.4.1: Neu ngay > 30 => end.
			5.4.2: Xu ly.
				5.4.2.1: Ngay dau thang.
					- NextMonth = Month.
					- LastMonth = Month - 1.
					- Yesterday = 31.
					- Tomorrow = ToDay + 1.
				5.4.2.2: Ngay cuoi thang.
					- LastMonth = Month.
					- NextMonth = Month + 1.
					- Yesterday = ToDay - 1.
					- Tomorrow = 1.
				5.4.2.3: Ngay giua thang.
					- Yesterday = ToDay - 1.
					- Tomorrow = ToDay + 1.
	Neu khong phan tich truoc => se kho ma clean code.
	*/
	// Input.
	unsigned int iToDay, iMonth, iYear; // Hien tai.
	unsigned int iYesterday, iLastMonth, iLastYear; // Truoc do.
	unsigned int iTomorrow, iNextMonth, iNextYear; // Ke tiep.

	cout << "Nhap vao ngay hien tai: ";
	cin >> iToDay;
	cout << "Nhap vao thang hien tai: ";
	cin >> iMonth;
	cout << "Nhap vao nam hien tai: ";
	cin >> iYear;

	// Xu ly.
	if (iYear > 0)
	{
		if (iToDay > 0)
		{
			bool bCheckLeapYear = (!(iYear % 4) && (iYear % 100)) || !(iYear % 400);
			bool bCheckDay = true;

			iLastYear = iNextYear = iYear;
			switch (iMonth)
			{
			case 2:
				if (bCheckLeapYear) // Nam nhuan
					if (iToDay > 29)
						bCheckDay = false;
					else
						if (iToDay > 28)
							bCheckDay = false;

				if (bCheckDay)
				{
					if (iToDay == 1)
					{
						iYesterday = 31;
						iLastMonth = iMonth - 1;

						iTomorrow = iToDay + 1;
						iNextMonth = iMonth;

						iLastYear = iNextYear = iYear;
					}
					else if (iToDay < 28) // Giua thang.
					{
						iLastMonth = iNextMonth = iMonth;

						iYesterday = iToDay - 1;
						iTomorrow = iToDay + 1;
					}
					else
					{
						iYesterday = iToDay - 1;
						iLastMonth = iMonth;
						if (bCheckLeapYear)
						{
							if (iToDay == 28)
							{
								iTomorrow = iToDay + 1;
								iNextMonth = iMonth;
							}
							else
							{
								iTomorrow = 1;
								iNextMonth = iMonth + 1;
							}
						}
						else
						{
							if (iToDay == 28)
							{
								iTomorrow = 1;
								iNextMonth = iMonth + 1;
							}
							else
								bCheckDay = false;
						}
					}
				}
				break;
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if (iToDay <= 31)
				{
					// Ngay giua thang.
					iYesterday = iToDay - 1;
					iTomorrow = iToDay + 1;
					iLastMonth = iNextMonth = iMonth;

					if (iToDay == 1)
					{
						iNextMonth = iMonth;
						iNextYear = iYear;
						iTomorrow = iToDay + 1;
						iLastMonth = iMonth - 1;

						if (iMonth == 1)
						{
							iLastYear = iYear - 1;
							iLastMonth = 12;
							iYesterday = 31;
						}
						else if (iMonth == 3)
						{
							if (bCheckLeapYear)
								iYesterday = 29;
							else
								iYesterday = 28;
						}
						else
							iYesterday = 30;
					}

					if (iToDay == 31)
					{
						iTomorrow = 1;
						iLastMonth = iMonth;
						iYesterday = iToDay - 1;
						if (iMonth == 12)
						{
							iNextYear = iYear + 1;
							iNextMonth = 1;
						}
						else
							iNextMonth = iMonth + 1;
					}
				}
				else
					bCheckDay = false;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				if (iToDay <= 30)
				{
					// Xet cho nhung ngay giua thang.
					iLastMonth = iNextMonth = iMonth;
					iYesterday = iToDay - 1;
					iTomorrow = iToDay + 1;

					if (iToDay == 1)
					{
						iLastMonth = iMonth - 1;
						iYesterday = 31;
					}

					if (iToDay == 30)
					{
						iNextMonth = iMonth + 1;
						iTomorrow = 1;
					}
				}
				else
					bCheckDay = false;
				break;
			default:
				cout << "Thang nhap vao khong hop le, xin kiem tra lai!";
				break;
			}

			if (bCheckDay)
			{
				cout << "Ngay thang nam truoc do: " << iYesterday << "/" << iLastMonth << "/" << iLastYear << endl;
				cout << "Ngay thang nam ke tiep: " << iTomorrow << "/" << iNextMonth << "/" << iNextYear;
			}
			else
			{
				cout << "Ngay nhap vao khong hop le, xin kiem tra lai!";
			}
		}
		else
		{
			cout << "Ngay nhap vao khong hop le, xin kiem tra lai!";
		}
	}
	else
	{
		cout << "Nhap nam khong hop, xin kiem tra lai!";
	}

	cout << endl;
	system("pause");
	return 0;
}
