#include <iostream>
#include "lib.h"
//#include "ecole.h"
//#include <stdlib.h>
using namespace std;

int main() {
int a=5;
int b=2;
calcul c;
//int annee=1942;
//ecole e;

	//std::cout <<e.creation(annee) << std::endl; 
	cout << "somme :" << endl;
	cout << c.somme(a,b) << endl;
	cout << "multiplication :" << endl;
	cout << c.multiplication(a,b) << endl;	
	cout << "division :" << endl;
	cout << c.division(a,b) << endl;
	
	//calcul* calcul1 = new calcul();
	//std::cout << calcul1->somme(6,5) << std::endl;

return  0;
}


