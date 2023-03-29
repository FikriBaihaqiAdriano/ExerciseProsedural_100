#include <iostream>
using namespace std;

double ratarata(double a, double b) {
	return (a + b) / 2;
}

string status(double t, double m) {
	if (t >= 70 || m >= 80)
		return "Diterima";
	else
		return "Di tolak";
}

string Nama[20];
int nilMTK[20], nilBing[20];
float rataratanil[20];

void input() {
	for (int i = 0; i < 20; i++) {

		cout << "Masukkan Nama : ";
		cin >> Nama[i];
		cout << "Masukkan Nilai Matematika : ";
		cin >> nilMTK[i];
		cout << "Masukkan Nilai Bahasa Inggris : ";
		cin >> nilBing[i];

	}
}

