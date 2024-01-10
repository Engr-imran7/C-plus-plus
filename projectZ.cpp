#include<iostream>
#include<windows.h>
#include<color.h>
#include<conio.h>
using namespace std;
class Laptop{
	private :
		int a,b,c,d,e,f;	
		char  g[50];
		int p1,p2,p3,p4,p5,p6,p7,p8;
		public:
			Laptop()
			{
				p1=190000;
				p2=180000;
				p3=160000;
				p4=155000;
				p5=110000;
				p6=100000;
				p7=8000000 ;
				p8=1200000;
			}
		void input()
		{
		cout<<"1: HP"<<endl;
		cout<<"2: Dell"<<endl;
		cout<<"3: lenovo"<<endl;
		cout<<"4: Apple Macbook"<<endl;
		cin>>a;
		}
		void details ()
		{
			if (a==1)
			{
				cout<<" HP laptop "<<endl;
				cout<<"1: HP Elit book 11 gen"<<endl;
				cout<<"2: HP Elit book 12 gen"<<endl;
				cin>>b;
				if (b==1)
				{
					system("cls");
				cout<<"HP Elit Book"<<endl;
				cout<<"Generation 11 "<<endl;
				cout<<"8 GB RAM"<<endl;
				cout<<"256 GB SSD"<<endl;
				cout<<"12.0 FHD (1920 x 1080) IPS, display "<<endl;
				cout<<"6 hour of battery life "<<endl;
				cout<<"14 inch Display "<<endl;
				cout<<"intel processor "<<endl;
				cout<<endl;
				cout<<"price = "<<p1<<endl;
				cout<<endl;
				}
				else if (b==2)
				{system ("cls");
					cout<<"HP Elite Book"<<endl;
				cout<<"Genration 12"<<endl;
				cout<<"16 GB RAM"<<endl;
				cout<<"512 GB SSD"<<endl;
				cout<<"2 GB Graphic card"<<endl;
				cout<<"12 inch display"<<endl;
				cout<<"8 hour of battery life"<<endl;
				cout<<"14.0 FHD (1920 x 1080) IPS, display "<<endl;
				cout<<"intel processor "<<endl;
				cout<<endl;
				cout<<"price = "<<p2<<endl;
				cout<<endl;
				}
				else {
					cout<<"invalid input "<<endl;
				}
			}
			else if (a==2)
			{
			cout<<" Dell Laptop "<<endl;
			cout<<"1: Dell Latitude 10 gen"<<endl;
			cout<<"2: Dell G Series 11 gen"<<endl;
			cin>>c;
				if (c==1)
				{
					system("cls");
					cout<<endl;
				cout<<"Dell latitude "<<endl;
				cout<<"10 Generation "<<endl;
				cout<<"8 GB RAM "<<endl;
				cout<<"256 GB SSD"<<endl;
				cout<<"16.0 FHD (1920 x 1080) IPS, display "<<endl;
				cout<<"1 GB Graphic card"<<endl;
				cout<<"9 Hour of battery life"<<endl;
				cout<<endl;
				cout<<"price = "<<p3<<endl;
				cout<<endl;
				}
				else if (c==2)
				{
					system("cls");
						cout<<"Dell G series "<<endl;
				cout<<"11 Generation"<<endl;
				cout<<"16 GB RAM "<<endl;
				cout<<"512 GB SSD"<<endl;
				cout<<"14.0 FHD (1920 x 1080) IPS, display "<<endl;
				cout<<"2 GB Graphic card"<<endl;
				cout<<"7 hour of battery life"<<endl;
				cout<<endl;
				cout<<"price = "<<p4<<endl;
				cout<<endl;
				}
			else {
				cout<<"invalid input"<<endl;
				}
			}
		else if (a==3)
		{
			cout<<"Laptop Lenovo"<<endl;
			cout<<"1: ThinkPad"<<endl;
			cout<<"2:ThinkBook"<<endl;
			cin>>d;
			if (d==1)
			{
				system("cls");
				cout<<"Lenovo thinkpad"<<endl;
				cout<<"X1 8 Generation"<<endl;
				cout<<"16 GB LPDDR3 storage"<<endl;
				cout<<"512 GB SSD"<<endl;
				cout<<"14.0 FHD (1920 x 1080) IPS, anti-glare display "<<endl;
				cout<<"Up to 19.5 hours of battery life"<<endl;
				cout<<"Intel processor "<<endl;
				cout<<endl;
				cout<<"price = "<<p5<<endl;
				cout<<endl;
			}
			else if (d==2)
			{
				system("cls");
				cout<<"lenovo think book"<<endl;
				cout<<"X3 10 generation "<<endl;
				cout<<"8 GB RAM "<<endl;
				cout<<"256 GB SSD"<<endl;
				cout<<"300 GB aditional HDD"<<endl;
				cout<<"14.0 FHD (1920 x 1080) IPS, anti-glare display "<<endl;
				cout<<"up to 10 hour battery life"<<endl;
				cout<<"AMD Processor"<<endl;
				cout<<endl;
				cout<<"price = "<<p6<<endl;
				cout<<endl;
				}
				else {
					cout<<"invalid input"<<endl;
				}
		}
		 else if  (a==4)	
		{
			cout<<"Apple Mack Book "<<endl;
			cout<<"1: Macbook pro"<<endl;
			cout<<"2: Mackbook"<<endl;
			cin>>e;
			cout<<endl;
			if (e==1)
			{
				system("cls");
				cout<<"Macbook pro "<<endl;
				cout<<"Apple silicon M-series chips"<<endl;
				cout<<"16 GB Unified memory"<<endl;
				cout<<"8TB Storage "<<endl;
				cout<<"HDMI port, SDXC card slot, 3.5 mm headphone jack, MagSafe 3 port"<<endl;
				cout<<"14.2-inch (diagonal) Liquid Retina XDR display"<<endl;
				cout<<"Battery life up to 22 hours"<<endl;
				cout<<"The latest model was released in 20212"<<endl;
				cout<<endl;
				cout<<"price = "<<p7<<endl;
				cout<<"in word 8 Lac "<<endl;
				cout<<endl;
				}
						else if (e==2)
						{
							system("cls");
							cout<<"Mackbook air M2"<<endl;
							cout<<"Apple M2 chip (8c CPU / 8c GPU, configurable to 10c GPU)"<<endl;
							cout<<"256GB storage (configurable to 2TB)"<<endl;
							cout<<"36 GB unified memory"<<endl;
							cout<<"8 TB Storage"<<endl;
							cout<<"Liquid Retina display 13.6-inch"<<endl;
							cout<<" Up to 18 hours Apple TV app movie playback, up to 15 hours wireless web,"<<endl;
							cout<<endl;
							cout<<"price = "<<p8<<endl;
							cout<<"in word 12 lac "<<endl;
							cout<<endl;
						}
					else {
						cout<<"invalid input "<<endl;
					}
		}
		else {
			cout<<"invalid input process cancelled "<<endl;
			cout<<"please try again"<<endl;
	}
}


void payment()
		{
			if (a==1||a==2||a==3||a==4)
			{
			cout<<endl;
			cout<<"payment should be online "<<endl;
			cout<<"are you for this payment"<<endl;
			cout<<"1: yes"<<endl;
			cout<<"2: No"<<endl;
			cin>>f;
			if (f==1)
			{
				system("cls");
				if (b==1)
				{
					cout<<"congrats"<<endl;
					cout<<"an amount of "<<p1<<"  has been paid for HP Elite Book 11 gen"<<endl;
					cout<<"Order details"<<endl;
					cout<<endl;
					cout<<"HP Elit Book"<<endl;
				cout<<"Generation 11 "<<endl;
				cout<<"8 GB RAM"<<endl;
				cout<<"256 GB SSD"<<endl;
				cout<<"12.0 FHD (1920 x 1080) IPS, display "<<endl;
				cout<<"6 hour of battery life "<<endl;
				cout<<"14 inch Display "<<endl;
				cout<<"intel processor "<<endl;
				cout<<endl;
				cout<<"price = "<<p1<< " paid "<<endl;
				}
				else if (b==2)
				{
					cout<<"Congrates "<<endl;
					cout<<"an amount of "<<p2<<"  has been paid for HP Elite Book 12 gen"<<endl;
					cout<<"order details"<<endl;
						cout<<"\n HP Elite Book"<<endl;
				cout<<"Genration 12"<<endl;
				cout<<"16 GB RAM"<<endl;
				cout<<"512 GB SSD"<<endl;
				cout<<"2 GB Graphic card"<<endl;
				cout<<"12 inch display"<<endl;
				cout<<"8 hour of battery life"<<endl;
				cout<<"14.0 FHD (1920 x 1080) IPS, display "<<endl;
				cout<<"intel processor "<<endl;
				cout<<endl;
				cout<<"price = "<<p2<<" paid"<<endl;
				cout<<endl;
				}
		  else if (c=1)
				{
					cout<<"Congrates "<<endl;
					cout<<"an amount of "<<p3<<" has been paid for  Dell Latitude 10 gen"<<endl;
					cout<<"\norder details"<<endl;
					cout<<"Dell latitude "<<endl;
				cout<<"10 Generation "<<endl;
				cout<<"8 GB RAM "<<endl;
				cout<<"256 GB SSD"<<endl;
				cout<<"16.0 FHD (1920 x 1080) IPS, display "<<endl;
				cout<<"1 GB Graphic card"<<endl;
				cout<<"9 Hour of battery life"<<endl;
				cout<<endl;
				cout<<"price = "<<p3<<" paid"<<endl;
				}
				else if(c==2)
				{
					cout<<"Congrates "<<endl;
					cout<<"an amount of "<<p4<<" has been paid for Dell G series 11 gen "<<endl;
					cout<<"Order details"<<endl;
						cout<<"\nDell G series "<<endl;
				cout<<"11 Generation"<<endl;
				cout<<"16 GB RAM "<<endl;
				cout<<"512 GB SSD"<<endl;
				cout<<"14.0 FHD (1920 x 1080) IPS, display "<<endl;
				cout<<"2 GB Graphic card"<<endl;
				cout<<"7 hour of battery life"<<endl;
				cout<<endl;
				cout<<"price = "<<p4<<endl;
					
				}
				else if (d==1)
				{
							cout<<"Congrates "<<endl;
					cout<<"an amount of "<<p5<<" has been paid for Lenovo thinkpad X1 8 Generation "<<endl;
					cout<<"Order details"<<endl;
					cout<<"\nLenovo thinkpad"<<endl;
				cout<<"X1 8 Generation"<<endl;
				cout<<"16 GB LPDDR3 storage"<<endl;
				cout<<"512 GB SSD"<<endl;
				cout<<"14.0 FHD (1920 x 1080) IPS, anti-glare display "<<endl;
				cout<<"Up to 19.5 hours of battery life"<<endl;
				cout<<"Intel processor "<<endl;
				cout<<endl;
				cout<<"price = "<<p5<<" paid "<<endl;
				}
				else if (d==2)
				{
					cout<<"Congrates "<<endl;
					cout<<"an amount of "<<p6<<" has been paid for lenovo think book X3 10 generation "<<endl;
					cout<<"Order details "<<endl;
					cout<<"\nlenovo think book"<<endl;
				cout<<"X3 10 generation "<<endl;
				cout<<"8 GB RAM "<<endl;
				cout<<"256 GB SSD"<<endl;
				cout<<"300 GB aditional HDD"<<endl;
				cout<<"14.0 FHD (1920 x 1080) IPS, anti-glare display "<<endl;
				cout<<"up to 10 hour battery life"<<endl;
				cout<<"AMD Processor"<<endl;
				cout<<endl;
				cout<<"price = "<<p6<<" paid "<<endl;
				}
		}
		if (f==1)
		{
		 if (e==1)
				{
					system("cls");
						cout<<"Congrates "<<endl;
					cout<<"an amount of "<<p7<<" has been paid for Macbook pro "<<endl;
					cout<<"Order details "<<endl;
					cout<<"\nMacbook pro "<<endl;
				cout<<"Apple silicon M-series chips"<<endl;
				cout<<"16 GB Unified memory"<<endl;
				cout<<"8TB Storage "<<endl;
				cout<<"HDMI port, SDXC card slot, 3.5 mm headphone jack, MagSafe 3 port"<<endl;
				cout<<"14.2-inch (diagonal) Liquid Retina XDR display"<<endl;
				cout<<"Battery life up to 22 hours"<<endl;
				cout<<"The latest model was released in 20212"<<endl;
				cout<<endl;
				cout<<"price = "<<p7<<endl;
				cout<<" in word 8 lac paid "<<endl;
				}
				else if (e==2)
				{
					system("cls");
					cout<<"Congrates "<<endl;
					cout<<"an amount of "<<p7<<" has been paid for Mackbook air M2 "<<endl;
					cout<<"Order details "<<endl;
					cout<<"\nMackbook air M2"<<endl;
							cout<<"Apple M2 chip (8c CPU / 8c GPU, configurable to 10c GPU)"<<endl;
							cout<<"256GB storage (configurable to 2TB)"<<endl;
							cout<<"36 GB unified memory"<<endl;
							cout<<"8 TB Storage"<<endl;
							cout<<"Liquid Retina display 13.6-inch"<<endl;
							cout<<" Up to 18 hours Apple TV app movie playback, up to 15 hours wireless web,"<<endl;
							cout<<endl;
							cout<<"price = "<<p8<<endl;
							cout<<"in word 12 lac paid"<<endl;
				}
		}
		else if (f==2)
		{
			cout<<"invalit input "<<endl;
		}
	}
	else{
			cout<<"invalit input "<<endl;
		}
}
void add()
	{
		if (b==1||b==2||c==1||c==2||d==1||d==2||e==1||e==2)
		{
		cout<<endl;
		cout<<"Enter your address for delivery"<<endl;
		cin.getline(g,50);
		}
		else {
			cout<<"invalid input "<<endl;
		}
}
void show()
	{
		if (b==1||b==2||c==1||c==2||d==1||d==2||e==1||e==2)
		{
		cout<<endl;
		cout<<"process has been comlplted"<<endl;
		cout<<"your order will be delivered in 2 days on "<<g;
		}
		else {
			cout<<"invalit input"<<endl;
		}
	}
};

int main()
{
	Laptop l;
	l.input();
	l.details();
	l.add();
	l.payment();
	l.show();
	
	getch();

return 0;
}

