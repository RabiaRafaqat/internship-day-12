#include <iostream>

using namespace std;

int charToInt(char digit) {
    return digit - '0'; // Convert character to integer
}

int main() {
    char myChar = '5'; // Let's use '5' as an example
    int myInt = charToInt(myChar); // Convert it to an integer

    cout << "Character: " << myChar << " becomes Integer: " << myInt << endl;

    return 0;
}
