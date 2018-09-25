#include "Segment.h"
#include "Point.h"
#include <iostream>

using namespace std;

int main(){
	Segment S;
	Point P1(3,2);
	Point P2(1,4);
	
	
	//S.affichage();
	
	Segment S1(P1,P2);
	S1.affichage();
	cout<<S1.longueur()<<endl;
	
	S1.estSurDiagonale();
	S1.estHorizontale();
	S1.estVerticale();

	
	
	
	
	return 0;
	
}
