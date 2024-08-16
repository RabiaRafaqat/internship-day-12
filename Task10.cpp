#include <iostream>
#include <string>

using namespace std;

string reverseString(const string& str) {
    string reversed;
    for (int i = str.size() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}

int main() {
    string myString = "Hello, World!";

    string reversed = reverseString(myString);

    cout << "Reversed string: " << reversed << endl;

    return 0;
}
