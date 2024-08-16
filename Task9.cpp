#include <iostream>

using namespace std;

int stringLength(const char* str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    const char* myString = "Hello, World!";

    int length = stringLength(myString);

    cout << "The length of the string is: " << length << endl;

    return 0;
}
