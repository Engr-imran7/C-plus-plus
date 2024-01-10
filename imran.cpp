#include<iostream>
#include<conio.h>
#include<windows.h>
#include<imran.h>
#include<color.h>
using namespace std;

	
int main()
{
	
  int i,j;
//condition for I
for(j=2,i=1;i<=8;i++)
   {
   	Color(3);
   	Sleep (100);
//	system("color 0a");
	gotoxy(i,j);
	cout<<"*";
   }
for (i=5,j=2;j<=8;j++)
{
	
	Sleep (100);
	//system("color 0a");
	gotoxy(i,j);
	cout<<"*";
}
for(j=8,i=1;i<=8;i++)
{
	Sleep (100);
//	system("color 0a");
	gotoxy(i,j);
	cout<<"*";	
}
//condition for M
for(i=10,j=8;j>=2;j--)
  {
  	Color (2);
   Sleep(100);
  // system ("color 0c");
   gotoxy(i,j);
   cout<<"*";
  }
  
for(i=10,j=2;j<=6;i++,j++)
  {
   Sleep(100);
   gotoxy(i,j);
   cout<<"*";
  }
  for(i=15,j=5;i<18,j>=2;j--,i++)
  {
   Sleep(100);
   gotoxy(i,j);
   cout<<"*";
  }
  for (i=18,j=2;j<=8;j++)
  {
  	Sleep(100);
   gotoxy(i,j);
   cout<<"*";
  }
  //condition for R
  for(i=20,j=8;j>=2;j--)
  {
  	Color (4);
  	Sleep(100);
   gotoxy(i,j);
   cout<<"*";
  }
  for(i=20,j=2;i<=27;i++)
  {
  	Sleep(100);
   gotoxy(i,j);
   cout<<"*";
  }
  for(i=27,j=2;j<=5;j++)
  {
  	Sleep(100);
   gotoxy(i,j);
   cout<<"*";
  }
  
  for(i=27,j=5;i>=20;i--)
  {
  	Sleep(100);
   gotoxy(i,j);
   cout<<"*";
  }
  for(i=20,j=5;j<=8;i++,j++)
  {
  	Sleep(100);
   gotoxy(i,j);
   cout<<"*";
  }
  
  //condition for A
  for (i=29,j=8;j>=2;i++,j--)
  {
  	Color (5);
  	Sleep(100);
   gotoxy(i,j);
   cout<<"*";
  }
  
  
  for(i=35,j=2;j<=8;i++,j++)
  {
  	Sleep(100);
   gotoxy(i,j);
   cout<<"*";
  }
  for(i=32,j=5;i<=38;i++)
  {
  	Sleep(100);
   gotoxy(i,j);
   cout<<"*";
  }
  //condition for N
  
  for(i=45,j=2;j<=8;j++)
  {
  	Color (6);
  		Sleep(100);
   gotoxy(i,j);
   cout<<"*";
  }
  for(i=45,j=2;j<=8;i++,j++)
  {
  		Sleep(100);
   gotoxy(i,j);
   cout<<"*";
  }
  for(i=51,j=2;j<=8;j++)
  {
  		Sleep(100);
   gotoxy(i,j);
   cout<<"*";
  }
  
  //
 
}

