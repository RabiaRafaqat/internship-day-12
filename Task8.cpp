#include <iostream>
#include <string>

using namespace std;

int binaryToDecimal(const string& binaryStr) {
    int decimalValue = 0;
    int base = 1;

    for (int i = binaryStr.size() - 1; i >= 0; i--) {
        char binaryChar = binaryStr[i];

        if (binaryChar == '1') {
            decimalValue += base;
        } else if (binaryChar != '0') {
            cout << "Invalid binary character: " << binaryChar << endl;
            return -1;
        }

        base *= 2;
    }

    return decimalValue;
}

int main() {
    string binaryStr = "1101";

    int decimalValue = binaryToDecimal(binaryStr);

    if (decimalValue != -1) {
        cout << "Binary: " << binaryStr << " is Decimal: " << decimalValue << endl;
    }

    return 0;
}
