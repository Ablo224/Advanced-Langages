using namespace std;
#include <iostream>


void tableauEcriture(int t[],int taille)
{
	int *p=t;
	for(int i=0;i<taille;i++)
	{
		*(p++)=i;
	}
	
}

void tableauLecture(int const t[],int taille)
{
	for(int i=0;i<taille;i++)
	{
		cout<<"tab["<<i<<"] = "<<t[i]<<endl;
	}
}

int main()
{
	int t[3];
	tableauEcriture(t,3);
	tableauLecture(t,3);
	
	return 0;
}
