#include "admin.h"

class CRetea
{
private:
	CUtilizator u[10];
	CAdmin a;
public:
	void conectare(int);
	void deconectare(int,string);
	void afisare(int);
};

