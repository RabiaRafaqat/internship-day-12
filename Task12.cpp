#include <iostream>

using namespace std;

string concatenateStrings(const string& str1, const string& str2) {
    string result;

    // Add first string to result
    for (int i = 0; i < str1.size(); i++) {
        result += str1[i];
    }

    // Add second string to result
    for (int i = 0; i < str2.size(); i++) {
        result += str2[i];
    }

    return result;
}

int main() {
    string string1 = "Hello, ";
    string string2 = "World!";

    string concatenated = concatenateStrings(string1, string2);

    cout << "Concatenated string: " << concatenated << endl;

    return 0;
}
