using namespace std;
#include <iostream>
#include <string.h>

void swap(int &x,int &y)
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}


int main()
{
	 
	int a=3; 
	int b=4;
	swap(a,b);
	cout<<"a = "<<a<< " b = "<<b<<endl;
	
	return 0;
}
