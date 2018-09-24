using namespace std;
#include <iostream>

class POINT{
	
	private:
		int x,y;
	public:
		POINT()
		{
			this->x = 2;
			this->y = 4;
		}
		
		POINT(int a,int b)
		{
			this->x = a;
			this->y = b;
			cout<<this->x<< " "<<this->y<<endl;
		}
		
		POINT(const POINT &p)
		{
			this->x = p.x;
			this->y = p.y;
		}
		
		void afficher()
		{
			cout<<this->x<<" "<<this->y<<endl;
		}
			
		
};

int main()
{
	POINT p(23,56);

		
	
	
	
	
	
	return 0;
}
