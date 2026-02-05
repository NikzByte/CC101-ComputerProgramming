#include <iostream>

using namespace std;

int main() {
    int a1, d, n; 
    
    cout << "WELCOME TO NANIWA HARUKAS!\n";
    
    cout << "\nEnter the first term (a1): ";
    cin >> a1;
    cout << "Enter the common difference (d): ";
    cin >> d;
    cout << "Enter the number of terms (n): ";
    cin >> n;
    
    cout << "\nArithmetic Sequence: ";
    int term = a1;
    int sum = 0;
    
    for (int i = 1; i <= n; i++) {
        cout << term << " ";
        sum += term;
        term += d;
    }
    
    cout << "\nSum of sequence = " << sum << endl;
    
    if (sum == 60) {
        cout << "Welcome to the Observation Deck.\n";
        cout << "\"It's a beautiful sunset, isn't it?\"";
    }
    else if (sum % 5 == 0 && sum % 3 == 0) {
        cout << "Welcome to the Souvenir Shop.";
    }
    else if (sum % 2 == 0) {
        cout << "Welcome to the Restaurant and Sky Garden.";
    }
    else {
        cout << sum << endl;
    }
    return 0;
}