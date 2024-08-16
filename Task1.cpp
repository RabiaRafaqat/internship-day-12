// Integer to Float Conversion: Write a function that takes an integer as input and 
//returns its float equivalent. Demonstrate the function with a sample integer. 

#include <iostream>

using namespace std;

void convertToFloat(int number) {
    float floatNumber = number; // Make it a float inside the function
    cout << "Float: " << floatNumber << endl; // Show the float number
}

int main() {
    int myNumber = 5; 
    cout << "Integer: " << myNumber << endl;
    
    convertToFloat(myNumber); // Convert and show the float version

    return 0;
}
