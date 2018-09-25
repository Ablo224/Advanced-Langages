#include "Point.h"


int main()
{
	Point P1;
	P1.afficher();
	
	Point P2(2,3);
	P2.afficher();
	
	Point P3(P2);
	P3.afficher();
	
	Point P4;
	P4.cloner(P3);
	P4.afficher();
	
	return 0;
}
