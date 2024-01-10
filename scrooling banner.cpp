#include<iostream>
#include<conio.h>
#include<windows.h>
#include<imran.h>
#include<color.h>
using namespace std;
int main()
{
	int i=1,j=2;

	
		while(!kbhit())
		{
			if(i==1)
	{Color (3);
		}	
		else if (i==30)
		{
			Color(4);
		}
		else if(i==50)
		{
			Color (2);
		}
		else if(i==70)
		{
			Color(1);
		}
			system("cls");
				gotoxy(i,j);
			cout<<"IMRAN NAZIR";
			i++;
			if (i==100)
			{
				i=1;
				j++;
			}
			}	
			

return 0;
}

