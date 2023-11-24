#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Turkish");

	cout << "\t\t\t\t----- Vize Final Notu Hesaplama @kemalasliyuksek -----" << endl;

	int vize1;
	int final;

	cout << "\n\tVize Notunuzu Girin: ";
	cin >> vize1;
	cout << "\n\tFinal Notunuzu Girin: ";
	cin >> final;

	int notOrt;
	notOrt = vize1 * 40 / 100 + final * 60 / 100;

	cout << "\n\n\tDers Ortalamanız: " << notOrt << endl;


	return 0;

}