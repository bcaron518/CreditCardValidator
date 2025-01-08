#include <iostream>
#include <string>
#include <cctype> // for isdigit()

using namespace std;

bool isNumberString(const string& s) {
    for (char c : s) {
        if (!isdigit(c)) return false;
    }
    return true;
}

int main() {
    string ccNumber;

    cout << "This program uses the Luhn Algorithm to validate a credit card number." << endl;
    cout << "You can enter 'exit' anytime to quit." << endl;

    while (true) {
        cout << "Please enter a credit card number to validate: ";
        cin >> ccNumber;

        if (ccNumber == "exit") break;

        if (!isNumberString(ccNumber)) {
            cout << "Invalid input! Please enter only numeric digits." << endl;
            continue;
        }

        if (ccNumber.length() < 12 || ccNumber.length() > 19) {
            cout << "Invalid length! Credit card numbers should have between 12 and 19 digits." << endl;
            continue;
        }

        int checksum = 0;
        for (int i = ccNumber.length() - 1, alternate = false; i >= 0; i--, alternate = !alternate) {
            int n = ccNumber[i] - '0';
            if (alternate) {
                n *= 2;
                if (n > 9) n -= 9;
            }
            checksum += n;
        }

        cout << "Credit Card Number: " << ccNumber << " is "
             << (checksum % 10 == 0 ? "Valid!" : "Invalid!") << endl;
    }

    return 0;
}
