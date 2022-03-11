#include "retea.h"

int main() {

	CRetea retea;

	int dim;
	cout << "Numar utilizatori pentru conectare:" << endl;
	cin >> dim;

	retea.conectare(dim);
	retea.afisare(dim);

	string n;
	cout << "Nume pentru deconectare:" << endl;
	cin >> n;
	retea.deconectare(dim,n);
	retea.afisare(dim);

	
	return 0;
}