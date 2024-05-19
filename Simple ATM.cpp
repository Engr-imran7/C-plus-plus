#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	int pin = 1234; // ATM pin 
	float blnc = 40000; // Account balance
	int no, acno, amount, number, lang, fast, cash, np, a, w, x, y, z;
	int eng, urd, ID[10], p;

	cout << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~ Welcome to Our ATM";
	cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	cout << "Please insert your ATM Card " << endl;
	cout << endl;
	cout << "Choose Language " << endl;
	cout << "1)  english \t\t 2)  urdu : " << endl;
	cin >> lang;
	if (lang == 1)
	{
		cout << "Enter Pin " << endl;
		cin >> p;
		if (p == pin)
		{
			cout << "\t Manue  " << endl;
			cout << "\t press " << endl;
			cout << "\t 1) Fast withdraw \t\t 4) Cash Withdraw" << endl;
			cout << "\t 2) Balance inquiry \t\t 5) change pin" << endl;
			cout << "\t 3) Fund Transfer " << endl;
			cin >> no;
			if (no == 1) {
				system("cls");
				cout << "\t 1) 1000 \t\t 2) 2000" << endl;
				cout << "\t 3) 5000 \t\t 4) cancel" << endl;
				cin >> fast;
				if (fast == 1) {
					cout << "\t 1 conform " << endl;
					cout << "\t 2 cancel " << endl;
					cin >> w;
					if (w == 1) {
						cout << " You have successfully withdraw 1000 from your account" << endl;
						cout << endl;
						cout << "please take your Debit card and cash before leaving " << endl;
					}
					else {
						cout << "Your transection has been cancelled " << endl;
						cout << "Thank u " << endl;
					}
				}
				else if (fast == 2) {
					cout << "\t 1 conform " << endl;
					cout << "\t 2 cancel " << endl;
					cin >> x;
					if (x == 1) {
						cout << " You have successfully withdraw 2000 from your account" << endl;
						cout << endl;
						cout << "please take your Debit card and cash before leaving " << endl;
					}
					else {
						cout << "Your transection has been cancelled " << endl;
						cout << "Thank u " << endl;
					}
				}
				else if (fast == 3) {
					cout << "\t 1 conform " << endl;
					cout << "\t 2 cancel " << endl;
					cin >> y;
					if (y == 1) {
						cout << " You have successfully withdraw 5000 from your account" << endl;
						cout << endl;
						cout << "please take your Debit card and cash before leaving " << endl;
					}
					else {
						cout << "Your transection has been cancelled " << endl;
						cout << "Thank you " << endl;
					}
				}
				else {
					cout << "Your transection has been cancelled " << endl;
					cout << "thank you" << endl;
				}
			}
			else if (no == 2)
			{
				system("cls");
				cout << endl;
				cout << "\tyour account Balance is  " << blnc << endl;
			}
			else if (no == 3) {
				system("cls");
				cout << "Please Enter  Account number " << endl;
				cin >> acno;
				cout << "\t Enter Amount" << endl;
				cin >> amount;
				if (amount <= blnc) {
					cout << "Are you sure for this transection " << endl;
					cout << " 1) yes  \t\t 2) No" << endl;
					cin >> z;
					if (z == 1)
					{
						cout << "tan Amount of RS : " << amount << " is transfered successfully " << endl;
						cout << endl;
						cout << "tYour Current Balanace is " << blnc - amount << endl;

					}
					else {
						cout << " Transection cancelled" << endl;
					}
				}
				else {
					cout << "Insufficient Balance " << endl;
				}
			}
			else if (no == 4)
			{
				system("cls");
				cout << "Enter Amunt " << endl;
				cin >> cash;
				if (cash > blnc) {
					cout << "Insufficient Balance" << endl;
				}

				else if (cash <= blnc) {
					cout << "1) Conform \t\t 2) cancel" << endl;
					cin >> a;
					if (a == 1) {
						cout << "An Amount of RS : " << cash << " has been Debated from your Account" << endl;
						cout << endl;
						cout << "your Remaining Balance is RS:" << blnc - cash << endl;
					}
					else {
						cout << "Transection has been Cancelled" << endl;
					}
				}
			}
			else if (no == 5)
			{
				system("cls");
				cout << "\t Enter ID Number " << endl;
				cin >> ID[10];

					cout << "Enter New Pin" << endl;
					cin >> np;
					cout << "1) Conform \t\t 2) cancel" << endl;
					if (np == 1) {
						cout << "Your Dabit Card pin has been changed " << endl;
					}
					else if (np==2) {
						cout << "your Request has been Cancelled" << endl;
					}

			}
		}
		else {
			cout << "Invalid Pin" << endl;
			cout << "try Again" << endl;
		}
	}
	else if(lang==2)
	{
		cout<<"Sorry this language is not available in this country"<<endl;
		cout<<"Try Again with correct language"<<endl;
	}

	return 0;
}
