#include <iostream>
using namespace std;

int main() {
    const int arraySize = 5;
    int index[arraySize];
    
    for (int i = 0; i < arraySize; i++) {
        cout << "Enter value for index " << i << ": ";
        cin >> index[i];
    }
    
    int max = index[0];
    
    for (int i = 0; i < arraySize; i++) {
        if (index[i] > max) {
            max = index[i];
        }
    }
    cout << endl;
    cout << "Maximum value: " << max;
    
    return 0;
}