#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");

	cout << "\n\t\t\t----- AMİRAL BATTI OYUNU @kemalasliyuksek -----\n" << endl;

	bool gemiler[4][4] = {
		{0, 0, 1, 0},
		{0, 0, 1, 0},
		{0, 0, 0, 0},
		{0, 1, 1, 0}
	};

	int vurus = 0;
	int tur = 0;

	cout << "\t\t\t\t0  1  2  3\t\t***        **            \n\t\t\t\t-  -  -  -\t\t   *    ********         \n\t0 | *  *  *  *\t\t*  *  *  *\t\t   **   ********         \n\t1 | *  *  *  *\t\t*  *  *  *\t\t*************************\n\t2 | *  *  *  *\t\t*  *  *  *\t\t *********************** \n\t3 | *  *  *  *\t\t*  *  *  *\t\t  ********************   \n";

	while (vurus < 4) {
		int satir, sutun;

		cout << "\n\tVuruş yapacağınız kordinatları seçin!" << endl;

		cout << "\n\tAteş edeceğiniz satır (0-3): ";
		cin >> satir;
		cout << "\tAteş edeceğiniz sütun (0-3): ";
		cin >> sutun;

		if (gemiler[satir][sutun]) {
			gemiler[satir][sutun] = 0;

			vurus++;

			cout << "\n\t*** VURDUN! *** Son " << 4 - vurus << " HEDEF kaldı.\n\n";


		} else {
			cout << "\n\t*** ISKALADIN! ***\n\n";
		}

		tur++;
	};

	cout << "\n\tTEBRİKLER!'" << tur << "' vuruşta toplam 4 hedefi de vurdunuz.\n\n";

	cout << "Çıkış yapmak için herhangi birşey yazıp enter' e basınız...";
	string cikis;
	cin >> cikis;
	return 0;
}