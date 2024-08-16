#include <iostream>

using namespace std;

int sumAsInt(double num1, int num2) {
    int sum = (int)num1 + num2; // Convert the double to an integer and add
    return sum;
}

int main() {
    double myDouble = 7.8;
    int myInt = 3;

    int result = sumAsInt(myDouble, myInt); // Get the sum as an integer

    cout << "The sum is: " << result << endl;

    return 0;
}
