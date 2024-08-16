#include <iostream>

using namespace std;

int main() {
    int myInt = 5;
    double myDouble = 7.3;

    double implicitResult = myInt + myDouble;
    cout << "Implicit conversion result: " << implicitResult << endl;

    int explicitResult = (int)myDouble + myInt;
    cout << "Explicit conversion result: " << explicitResult << endl;

    return 0;
}
