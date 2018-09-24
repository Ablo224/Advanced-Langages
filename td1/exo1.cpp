using namespace std;
#include <iostream>
#include <string.h>





 main()
{
	int tab[10];
	int *p=tab;
	
	
	/*for(int i=0;i<10;i++)
	{
		*p = i*100;
		cout<<"tab["<< i <<"] = "<<*p++<<endl;
	}*/
	
	
	
	char* ch2[3];
	
		ch2[0] = new char[strlen("truc")+1];
		strcpy(ch2[0],"truc");
		ch2[1] = new char[strlen("machin")+1];
		strcpy(ch2[1],"machin");
		ch2[2] = new char[strlen("chose")+1];
		strcpy(ch2[2],"chose");
		for(int i=0;i<3;i++)
		{
			cout<<"tableau"<<i<<"="<<ch2[i]<<endl;
		}
	
	
	delete[] ch2[0];
	delete[] ch2[1];
	delete[] ch2[2];
	
	
	
	
}

