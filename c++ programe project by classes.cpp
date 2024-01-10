
#include <iostream>
using namespace std;
class logicgates
{ 	char cha[4],chb[4],ch1[4],ch2[4],ch3a[4],ch3b[4],ch4[4],ch5[4],ch6a[4],ch6b[4],ch7a[4],ch7a1[4],ch7b[4];
    	public:
    		int n;
	
    		void input()
    		{
    			cout << "Enter the first binary number: " << endl;
     cin >> cha;
    cout << "Enter the second binary number: " << endl;
    cin >> chb;	
	cout<<"slect the gate "<<endl;
	cout<<"1.AND"<<endl;
    cout<<"2.OR"<<endl;
    cout<<"3.NOT"<<endl;
    cout<<"4.NOR"<<endl;
    cout<<"5.NAND"<<endl;
    cout<<"6.XOR"<<endl;
    cout<<"7.XNOR"<<endl;	

}

     void andgate()
			{
       for (int i = 0; i < 4; i++) {
       if (cha[i] == '1' && chb[i] == '1') {
            ch1[i] = '1';
        } else {
            ch1[i] = '0';
        }
    }

    cout << "Result: ";
    for (int j = 0; j < 4; j++) {
        cout << ch1[j];
    }
				
			}


void orgate()
{
for (int i = 0; i < 4; i++) {
       if (cha[i] == '1' || chb[i] == '1') {
            ch2[i] = '1';
        } else {
            ch2[i] = '0';
        }
    }

    cout << "Result: ";
    for (int j = 0; j < 4; j++) {
        cout << ch2[j];
    }	
}

void notgate()
{
		for (int i = 0; i < 4; i++) {
     if (cha[i] == '1') {
            ch3a[i] = '0';
        } else {
            ch3a[i] = '1';
        }
    
      if (chb[i] == '1') {
            ch3b[i] = '0';
        } else {
            ch3b[i] = '1';
        }
    }
 cout << "Result: "<<endl;
    for (int j = 0; j < 4; j++) {
        cout << ch3a[j];
    }
    cout<<endl;
    for (int j = 0; j < 4; j++) {
        cout << ch3b[j];
    }
}

void norgate()
{
			for (int i = 0; i < 4; i++) {
      if (cha[i] == '1' || chb[i] == '1') {
            ch4[i] = '1';
        } else {
            ch4[i] = '0';
        }
    }
    	for (int i = 0; i < 4; i++) {
        


        if (ch4[i] == '0') {
            ch4[i] = '1';
        } 
		else
		 {
            ch4[i] = '0';
        }
    }
    cout << "Result: ";
    for (int j = 0; j < 4; j++) {
        cout << ch4[j];
    }
}

void nandgate()
{
		for (int i = 0; i < 4; i++) {
       if (cha[i] == '1' && chb[i] == '1') {
            ch5[i] = '1';
        } else {
            ch5[i] = '0';
        }
    }
    	for (int i = 0; i < 4; i++) {
      if (ch5[i] == '0') {
            ch5[i] = '1';
        } else {
            ch5[i] = '0';
        }
    }
     cout << "Result: ";
    for (int j = 0; j < 4; j++) {
        cout << ch5[j];
    }
}

void xorgate()
{
  	//A.!B
    	for (int i = 0; i < 4; i++) {
       if (chb[i] == '0') 
		{
            ch6b[i] = '1';
        } else {
            ch6b[i] = '0';
        }
    }

	for (int i = 0; i < 4; i++) {
         if(cha[i]=='1'&&ch6b[i]=='1')
		 {
		  ch6b[i] = '1';
        } 
		else {
            ch6b[i] = '0';
        }
    }
    
 	//!A.B
	for (int i = 0; i < 4; i++) {
        


        if (cha[i] == '0') 
		{
            ch6a[i] = '1';
        } else {
            ch6a[i] = '0';
        }
    }

	for (int i = 0; i < 4; i++) {
        
        if (ch6a[i] == '1' && chb[i] == '1') {
            ch6a[i] = '1';
        } else {
            ch6a[i] = '0';
        }
    }
    	
//(A.!B)+(!A+B)
	for (int i = 0; i < 4; i++) {
        
        if (ch6a[i] == '1' || ch6b[i] == '1') {
            ch6a[i] = '1';
        } else {
            ch6a[i] = '0';
        }
    }
    cout << "Result: "<<endl;
     for (int i = 0; i < 4; i++)
	  {
        cout<<ch6a[i];
    }	
}

void xnorgate()
{
			//A.B
        for (int i = 0; i < 4; i++) {
        
        if (cha[i] == '1' && chb[i] == '1') {
            ch7a[i] = '1';
        } else {
            ch7a[i] = '0';
        }
    }
    
 	//!A.!B
	for (int i = 0; i < 4; i++) {
        
       if (cha[i] == '0') 
		{
            ch7a1[i] = '1';
        } else {
            ch7a1[i] = '0';
        }
     if (chb[i] == '0') 
		{
            ch7b[i] = '1';
        } else {
            ch7b[i] = '0';
        }
    }
    
//(!A.!B)
	for (int i = 0; i < 4; i++) {
        
        if (ch7a1[i] == '1' && ch7b[i] == '1') {
            ch7a1[i] = '1';
        } else {
            ch7a1[i] = '0';
        }
    }
    	
//(A.!B)+(!A+B)
	for (int i = 0; i < 4; i++) {
        
        if (ch7a[i] == '1' || ch7a1[i] == '1') {
            ch7a[i] = '1';
        } else {
            ch7a[i] = '0';
        }
    }
    cout << "Result: "<<endl;
     for (int i = 0; i < 4; i++)
	  {
        cout<<ch7a[i];
    }
}
}
;

int main()
{int n;
	logicgates project;
for(;;)
{	project.input();
		cin>>n;
	switch(n)
	{
    case 1:
	project.andgate();
    break;

 case 2:
       project.orgate();
    break;

    case 3:
 project.notgate();
    break;

	case 4:
	project.norgate();
    break;

case 5:
    project.nandgate();	
     break;

    case 6:
  project.xorgate();
    break;
    
     case 7:
    project.xnorgate();
    	break;

}
cout<<endl;
cout<<endl;
}
}

