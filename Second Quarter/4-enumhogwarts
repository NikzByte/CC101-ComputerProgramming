#include <iostream>
using namespace std;

enum House {
    GRYFFINDOR = 1,
    SLYTHERIN = 2,
    RAVENCLAW = 3,
    HUFFLEPUFF = 4
};

void printHouse() {
    cout << "Choose your Hogwarts House:" << endl;
    cout << "1 - Gryffindor" << endl;
    cout << "2 - Slytherin" << endl;
    cout << "3 - Ravenclaw" << endl;
    cout << "4 - Hufflepuff" << endl;
    
    cout << endl;
}

int main() {
    int choiceInput;
    
    printHouse();
    
    cout << "Enter your choice: ";
    cin >> choiceInput;
    
    cout << endl;
    cout << "Your House: ";
    
    switch(choiceInput) {
        case GRYFFINDOR:   cout << "Gryffindor - Where dwell the brave at heart!"; break;
        case SLYTHERIN:    cout << "Slytherin - Where the cunning and ambitious thrive!"; break;
        case RAVENCLAW:    cout << "Ravenclaw - For those of wit and wisdom!"; break;
        case HUFFLEPUFF:   cout << "Hufflepuff - Hard work, patience, loyalty, and fair play!"; break;
        default:           cout << "Invalid choice. No House assigned.";
    }
    return 0;
}