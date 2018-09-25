using namespace std;
#include<iostream>
#include "Point.h"

Point::Point()
{
	this->abs = 1;
	this->coord = 1;
}

Point::Point(int x,int y)
{
	abs = x;
	coord = y;
}



Point::Point(const Point& p)
{
	abs = p.abs;
	coord = p.coord;
}

void Point::cloner(const Point& p)
{
	this->abs = p.abs;
	this->coord = p.coord;
}

void Point::setX(int x)
{
	this->abs= x;
}

void Point::setY(int y)
{
	this->coord = y;
}

int Point::getX()
{
	return this->abs;
}

int Point::getY()
{
	return this->coord;
}

void Point::afficher()
{
	cout<<"\t(x,y) : ("<<abs<<","<<coord<<")\n"<<endl;
}



Point::~Point()
{
	cout << "Appel au destructeur point"<< endl;
}
