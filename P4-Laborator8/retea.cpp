#include "retea.h"

void CRetea::conectare(int dim) {
	a.citire();
	for (int i = 0;i < dim;i++) {
		u[i].citire();
	}
}

void CRetea::deconectare(int dim,string n) {
	for (int i = 0;i < dim;i++) {
		if (u[i].nume == n) {
			u[i].~CUtilizator();
		}
	}
}

void CRetea::afisare(int dim) {
	a.afisare();
	for (int i = 0;i < dim;i++) {
		cout << u[i].nume;
	}
}
