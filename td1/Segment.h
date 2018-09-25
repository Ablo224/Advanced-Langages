#ifndef SEGMENT_H
#define SEGMENT_H

#include "Point.h"
class Segment{
		
	private:

		Point ext1;
		Point ext2;
		
	public:
	
		//constructeur
		Segment();
		
		Segment(const Point& p1,const Point& p2);
		
		void affichage();
		
		bool estVerticale();
		
		bool estSurDiagonale();
		
		bool estHorizontale();
		
		double longueur();
		
		//destructeur
		~Segment();
		
};

#endif
