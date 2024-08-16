#include <iostream>
#include <string>

using namespace std;

string extractSubstring(const string& str, int start, int length) {
    string substring;
    
    int index = 0;
    for (int i = start; i < str.size() && index < length; i++) {
        substring += str[i];
        index++;
    }
    
    return substring;
}

int main() {
    string myString = "Hello, World!";
    int start = 7;
    int length = 5;

    string substring = extractSubstring(myString, start, length);

    cout << "Extracted substring: " << substring << endl;

    return 0;
}
