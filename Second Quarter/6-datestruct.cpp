#include <iostream>
using namespace std; 

struct {
    int day, year;
    string month;
} Date;

int main() {
    cout << "Enter day: ";
    cin >> Date.day;
    
    if (Date.day > 31) {
        cout << "Please enter a value from 1 to 31: ";
        cin >> Date.day;
    }
    
    
    cout << "Enter month: ";
    cin >> Date.month;
    
    cout << "Enter year: ";
    cin >> Date.year;
    
    cout << endl;
    cout << "Date: " << Date.day << "/" << Date.month << "/" << Date.year;
}