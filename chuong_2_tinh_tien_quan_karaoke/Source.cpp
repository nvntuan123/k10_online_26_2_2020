#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "resource.h"
#include <WinUser.h>

#define Ba_gio_dau  30000
#define Km_ba_muoi  21000
#define Km_muoi     27000
#define Hai_km      18000
#define Bd_gio_vang 8
#define KT_gio_vang 17

using namespace std;

int main()
{
	SetConsoleTitle(L"Tinh Tien Khach - Quan Karaoke.");
	LoadIcon(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_ICON1));

tuandeptrai:
	int iGio_BD, iGio_KT, iPhut_BD, iPhut_KT;
	cout << "*************************************************" << endl;
	cout << "Nhap gio bat dau   : ";
	cin >> iGio_BD;
	cout << "Nhap phut bat dau  : ";
	cin >> iPhut_BD;
	cout << "Nhap gio ket thuc  : ";
	cin >> iGio_KT;
	cout << "Nhap phut ket thuc : ";
	cin >> iPhut_KT;
	cout << "*************************************************" << endl;

	if ((iGio_BD < iGio_KT) && (iPhut_BD >= 0 && iPhut_BD <= 59) && ((iPhut_KT >= 0 && iPhut_KT <= 59)) && (iGio_BD >= 8 && (iGio_KT + ((float)iPhut_KT / 60)) <= 23))
	{
		float fThoi_Gian_Ket_Thuc = (iGio_KT + ((float)iPhut_KT / 60));
		float fThoi_Gian_Bat_Dau = (iGio_BD + ((float)iPhut_BD / 60));
		float Thoi_gian_hat = fThoi_Gian_Ket_Thuc - fThoi_Gian_Bat_Dau;
		cout << "Thoi gian hat cua khach la : " << Thoi_gian_hat << endl;
		cout << "*************************************************" << endl;
		cout << "So tien khach hang phai tra la : ";
		if (Thoi_gian_hat <= 3)
		{
			if ((fThoi_Gian_Bat_Dau >= Bd_gio_vang) && (fThoi_Gian_Bat_Dau <= KT_gio_vang))
			{
				if (fThoi_Gian_Ket_Thuc <= KT_gio_vang)
				{
					cout << Km_muoi * Thoi_gian_hat;
				}
				else//if ((iGio_KT + (float)iPhut_KT / 60) > KT_gio_vang)
				{
					cout << (Km_muoi * (KT_gio_vang - fThoi_Gian_Bat_Dau) + Ba_gio_dau * (Thoi_gian_hat - KT_gio_vang - fThoi_Gian_Bat_Dau));
				}
			}
			else if (fThoi_Gian_Bat_Dau > KT_gio_vang)
			{
				cout << Ba_gio_dau * Thoi_gian_hat;
			}
		}
		else
		{
			if ((fThoi_Gian_Bat_Dau >= Bd_gio_vang) && (fThoi_Gian_Bat_Dau <= KT_gio_vang))
			{
				if (fThoi_Gian_Ket_Thuc <= KT_gio_vang)
				{
					cout << (Km_muoi * 3 + Hai_km * (Thoi_gian_hat - 3));
				}
				else//if (fThoi_Gian_Ket_Thuc > KT_gio_vang)
				{
					if ((fThoi_Gian_Bat_Dau + 3) < KT_gio_vang)
					{
						cout << (Km_muoi * 3 + Hai_km * (KT_gio_vang - (fThoi_Gian_Bat_Dau + 3)) + Km_ba_muoi * (fThoi_Gian_Ket_Thuc - KT_gio_vang));
					}
					else if ((fThoi_Gian_Bat_Dau + 3) == KT_gio_vang)
					{
						cout << (Km_muoi * 3 + Km_ba_muoi * (Thoi_gian_hat - 3));
					}
					else //if ((iGio_BD + ((float)iPhut_BD / 60) + 3) > KT_gio_vang)
					{
						cout << (Km_muoi * (KT_gio_vang - fThoi_Gian_Bat_Dau) + Ba_gio_dau * (3 - (KT_gio_vang - fThoi_Gian_Bat_Dau)) + Km_ba_muoi * (Thoi_gian_hat - 3));
					}
				}
			}
			else if ((iGio_BD + (float)iPhut_BD / 60) > KT_gio_vang)
			{
				cout << (90000 + Km_ba_muoi * (Thoi_gian_hat - 3));
			}
		}
		cout << " VND " << endl;
		cout << "*************************************************" << endl;
	}
	else
	{
		cout << "Ban da nhap sai !" << endl;
		cout << "*************************************************" << endl;
	}

	char x;
	fflush(stdin);
	cout << "\nBan co muon tiep tuc (y/n).";
	x = _getch();
	if (x == 'y' || x == 'Y')
	{
		system("cls");
		goto tuandeptrai;
	}

	return 0;
}
