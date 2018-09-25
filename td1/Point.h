#ifndef POINT_H
#define POINT_H

class Point{
		
	private:
	
		int abs,coord;
		
	public:
	
		//constructeur
		Point();

		Point(int x,int y);
		
		Point(const Point& p);
		
		void afficher();
		
		void cloner(const Point& p);
		
		void setX(int x);
	
		void setY(int y);
	
		int getX();
	
		int getY();
		
		//destructeur
		~Point();
		
};

#endif
