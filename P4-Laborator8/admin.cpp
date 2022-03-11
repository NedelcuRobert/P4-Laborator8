#include "admin.h"

void CAdmin::citire() {
	cout << " Nume Admin:" << endl;
	cin >> nume;
	cout << "Parola Admin:" << endl;
	cin >> parola;
}

void CAdmin::afisare() {
	cout << nume;
}

void CAdmin::deconectare(string n) {
	if (nume == n) {
		CUtilizator::~CUtilizator();
	}
}
