#include <iostream>
#include <string>

using namespace std;

class CUtilizator
{
public:
	string nume;
	string parola;
public:
	~CUtilizator() {};
	virtual void citire();
};

