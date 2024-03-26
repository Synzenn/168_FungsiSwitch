#include <iostream>
using namespace std;

int Luas;

void prosedurluas(int p, int l) {
	Luas = p * l;
}

int fungsiluas(int p, int l) {
	return p * l;
}

int main() {
	int panjang, lebar;
	cout << "Masukkan Panjangnya : ";
	cin >> panjang;
	cout << "Masukkan Lebarnya : ";
	cin >> lebar;

	prosedurluas(panjang, lebar);
	cout << "Luas persegi panjang dengan prosedur :" << Luas << endl;

	cout << "Luas persegi panjang dengan fungsi :" << fungsiluas(panjang, lebar) << endl;

	return 0;
}