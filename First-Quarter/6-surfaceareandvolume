#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const float pi = 3.14159;

float getsurfaceArea(float rad, float height) {
    return 2 * pi * rad * (height + rad);
}

float getvolume(float rad, float height) {
    return pi * rad * rad * height;
}

int main() {
    float rad, height;
    
    cout << "Enter the radius of the cylinder: ";
    cin >> rad;
    cout << "Enter the height of the cylinder: ";
    cin >> height;
    
    float surfaceArea = getsurfaceArea(rad, height);
    float volume = getvolume(rad, height);
    
    cout << fixed << setprecision(2) << "Surface Area: " << surfaceArea;
    cout << fixed << setprecision(2) << "\nVolume: " << volume;
    
    return 0;
}