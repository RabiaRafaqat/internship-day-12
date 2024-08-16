#include <iostream>
#include <string>

using namespace std;

int hexToDecimal(const string& hexStr) {
    int decimalValue = 0;
    int base = 1; // 16^0

    // Traverse the hex string from the end
    for (int i = hexStr.size() - 1; i >= 0; i--) {
        char hexChar = hexStr[i];

        // Convert hex character to decimal value
        int digitValue;
        if (hexChar >= '0' && hexChar <= '9') {
            digitValue = hexChar - '0'; // '0' to '9' maps to 0 to 9
        } else if (hexChar >= 'A' && hexChar <= 'F') {
            digitValue = hexChar - 'A' + 10; // 'A' to 'F' maps to 10 to 15
        } else {
            cout << "Invalid hexadecimal character: " << hexChar << endl;
            return -1; // Error code for invalid character
        }

        // Update the decimal value
        decimalValue += digitValue * base;
        base *= 16; // Move to the next higher power of 16
    }

    return decimalValue;
}

int main() {
    string hexStr = "1A"; // Example hexadecimal string

    int decimalValue = hexToDecimal(hexStr); // Convert to decimal

    if (decimalValue != -1) {
        cout << "Hexadecimal: " << hexStr << " is Decimal: " << decimalValue << endl;
    }

    return 0;
}
