#include <iostream>
using namespace std;

void displayMenu(){ // display the menu using function void
    cout << "\nWelcome to Sweet Haven Dessert Shop!";
    cout << "\nMenu:";
    cout << "\n1. Chocolate Cake - A rich and moist chocolate cake.";
    cout << "\n2. Vanilla Ice Cream - Creamy vanilla ice cream made with real vanilla beans.";
    cout << "\n3. Fruit Tart - A delicious tart filled with fresh seasonal fruits.";
    cout << "\n4. Checkout - Finish your order.";

}
void showDescription(int choice) {
    switch (choice) {
        case 1:
        cout << "You ordered: Chocolate Cake. A rich and moist chocolate cake.";
            break;
        case 2:
        cout << "You ordered: Vanilla Ice Cream. Creamy vanilla ice cream made with real vanilla beans.";
            break;
        case 3: 
        cout << "You ordered: Fruit Tart - A delicious tart filled with fresh seasonal fruits.";
             break;
        case 4: 
        cout << "Checkout: Finish your order.";
            break;
        default: 
        cout << "Invalid choice. Please try again.";
    }
}
    
int main() {
    int choice;
    
    do {
        displayMenu();
        cout << "\nEnter your choice (1-4): ";
        cin >> choice;
        
        if (choice >= 1 && choice <= 3) {
            showDescription(choice);
        }
        else if (choice == 4) {
            cout << "Thank you for ordering!";
        }
        else {
            cout << "Error: Program asked for an input but no more input is available";
        }
    }
    while (choice != 4);
    
    return 0;
}