#include <iostream>

using namespace std;

int makeInt(float number) {
    return (int)number;
}

int main() {
    float firstNumber = 7.6;
    float secondNumber = 4.3;
    float thirdNumber = 2.9;
    float fourthNumber = -5.5;

    cout << "First: " << firstNumber << " becomes " << makeInt(firstNumber) << endl;
    cout << "Second: " << secondNumber << " becomes " << makeInt(secondNumber) << endl;
    cout << "Third: " << thirdNumber << " becomes " << makeInt(thirdNumber) << endl;
    cout << "Fourth: " << fourthNumber << " becomes " << makeInt(fourthNumber) << endl;

    return 0;
}
