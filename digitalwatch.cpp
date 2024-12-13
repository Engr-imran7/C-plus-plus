#include <iostream>
#include <iomanip> 
#include <windows.h>

using namespace std;

int hour = 0, minutes = 0, seconds = 0;

void incrementHour() {
    hour = hour + 1;
    if (hour > 23) {
        hour = 0;
    }
}

void incrementMinutes() {
    minutes = minutes + 1;
    if (minutes > 59) {
        minutes = 0;
        incrementHour();
    }
}

int main() {
    cout << "Set your time please" << endl;
    cout << "Enter hour: " << endl;
    cin >> hour;
    cout << "Enter minutes: " << endl;
    cin >> minutes;
    cout << "Enter seconds: " << endl;
    cin >> seconds;
    
    while (true) {
        // Print the current time with proper formatting
        cout << setfill('0') << setw(2) << hour << " : "
             << setfill('0') << setw(2) << minutes << " : "
             << setfill('0') << setw(2) << seconds << endl;

        // Delay for 1 second
        Sleep(1000);

        // Increment seconds
        seconds++;
        if (seconds > 59) {
            seconds = 0;
            incrementMinutes();
        }

        // Clear the screen
        system("CLS");
    }

}
