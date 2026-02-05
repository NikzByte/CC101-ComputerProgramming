#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char letter;
    
    cout << "Enter a single character: ";
    cin >> letter;
    
    if (letter >= 65 && letter <= 90) {
        cout << "Message accepted, Agent Juliet.";
    }
    else if (letter >= 97 && letter <= 122) {
        cout << "Message accepted, Agent Emma.";
    }
    else {
        cout << "Access denied. Invalid input.";        
    }
    return 0;
}