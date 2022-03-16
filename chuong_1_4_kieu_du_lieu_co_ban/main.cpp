#include <iostream> // Thu vien ho tro nhap xuat trong C++.

using namespace std;

int main()
{
	int iA = 5;

	cout << "char co so byte la: " << sizeof(char) << endl;
	cout << "short co so byte la: " << sizeof(short) << endl;
	cout << "int co so byte la: " << sizeof(int) << endl;
	cout << "long co so byte la: " << sizeof(long) << endl << endl;

	cout << "Mien gia tri cua kieu char: MIN = " << CHAR_MIN << ", MAX = " << CHAR_MAX << endl;
	cout << "Mien gia tri cua kieu short: MIN = " << SHRT_MIN << ", MAX = " << SHRT_MAX << endl;
	cout << "Mien gia tri cua kieu int: MIN = " << INT_MIN << ", MAX = " << INT_MAX << endl;
	cout << "Mien gia tri cua kieu long: MIN = " << LONG_MIN << ", MAX = " << LONG_MAX << endl;

	bool bCheck = true;

	char cKyTu = 'a';
	cout << "cKyTu = " << static_cast<int>(cKyTu);

	cout << endl;
	system("pause");
	return 0;
}
