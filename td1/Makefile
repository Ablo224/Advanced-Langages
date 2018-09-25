
run:clean

mainSeg: mainSeg.o 
	g++ -o mainSeg mainSeg.o Segment.o Point.o 

mainSeg.o: mainSeg.cpp 
	g++ -Wall -c mainSeg.cpp Segment.cpp Point.cpp

Point.o: Point.cpp Point.h 
	g++ -Wall -c Point.cpp 

Segment.o:Segment.cpp Segment.h  Point.h
	g++ -Wall -c Segment.cpp 

clean:
	rm -rf *.o
	rm -rf test
	
