#include <iostream>
using namespace std;

int main() {
    char ch[8];
    char ch1[8];
    char ch2[8];
    char ch3[8];

    cout << "Enter the first binary number: " << endl;
 for (int i = 0; i < 8; i++) {
        
    cin >> ch[i];}
 
    cout << "Enter the second binary number: " << endl;
 for (int i = 0; i < 8; i++) {
        
    cin >> ch1[i];}

   cout << "Enter the third binary number: " << endl;
 for (int i = 0; i < 8; i++) {
        
    cin >> ch3[i];}
    
    for (int i = 0; i < 8; i++) {
        if (ch[i] == '0' && ch1[i] == '0'&&ch3[i]=='0') {
            ch2[i] = '0';
        }
        else 
        {
            ch2[i] = '1';
        }
    }
cout<<"answer"<<endl;
    for (int j = 0; j < 8; j++) 
    {
        cout << ch2[j] << endl;
    }

    return 0;
}
