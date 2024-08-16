#include <iostream>
#include <iomanip>

using namespace std;

float doubleToFloat(double num) {
    return (float)num;
}

int main() {
    double myDouble = 123.456789012345; // A double with high precision
    float myFloat = doubleToFloat(myDouble); // Convert to float

    cout << fixed << setprecision(12); // Show precision for double
    cout << "Double: " << myDouble << endl;

    cout << fixed << setprecision(7); // Show precision for float
    cout << "Float: " << myFloat << endl;

    return 0;
}
