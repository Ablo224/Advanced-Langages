#include<iostream>
#include<math.h>
#include "Segment.h"
#include "Point.h"

using namespace std;


Segment::Segment():ext1(0,0){};

Segment::Segment(const Point& p1,const Point& p2):ext1(p1),ext2(p2){};

double Segment::longueur()
{
	double x = this->ext1.getX() - ext2.getX();
	double y = this->ext1.getY() - ext2.getY();
	x*=x;
	y*=y;
	
	return sqrt(x+y);
}

bool Segment::estVerticale()
{
	if(this->ext1.getX() == this->ext2.getX() )
	{
		cout<<"Le segment est vertical"<<endl;
		return true;
	}
	else
	{
		cout<<"Le segment n'est pas vertical"<<endl;
		return false;
	}
}

bool Segment::estHorizontale()
{
	if(this->ext1.getY() == this->ext2.getY())
	{
		cout<<"Le segment est horizontal"<<endl;
		return true;
	}
	else
	{
		cout<<"Le segment n'est pas horizontal"<<endl;
		return false;
	}
}

bool Segment::estSurDiagonale()
{
	if(this->ext1.getY() != this->ext2.getY() && this->ext1.getX() != this->ext2.getX())
	{
		cout<<"Le segment est sur diagonale"<<endl;
		return true;
	}
	else
	{
		cout<<"Le segment n'est pas une diagonale"<<endl;
		return false;
	}
}

void Segment::affichage()
{
	ext1.afficher();
	ext2.afficher();
}

Segment::~Segment()
{
	cout<<"Appel au destructeur Segment"<<endl;
}
