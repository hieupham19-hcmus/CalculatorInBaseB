#include "lib.h"

string toBaseB(int number, int base) {
    if (number == 0) {
        return "0";
    }
    string digits;
    while (number) {
        int remainder = number % base;
        char digit;
        if (remainder < 10) {
            digit = '0' + remainder;
        }
        else {
            digit = 'A' + remainder - 10;
        }
        digits.push_back(digit);
        number /= base;
    }
    reverse(digits.begin(), digits.end());
    return digits;
}

int fromBaseB(const string& digits, int base) {
    int number = 0;
    for (char digit : digits) {
        int value;
        if (digit >= '0' && digit <= '9') {
            value = digit - '0';
        }
        else {
            value = digit - 'A' + 10;
        }
        number = number * base + value;
    }
    return number;
}

void calculateSumDifference(int x, int y, int base) {
    // Convert x and y to base B
    string xDigits = toBaseB(x, base);
    string yDigits = toBaseB(y, base);

    // Calculate the sum and difference in base B
    int sumResult = x + y;
    int diffResult = abs(x - y);
    string sumDigits = toBaseB(sumResult, base);
    string diffDigits = toBaseB(diffResult, base);

    // Print the sum and difference in base B
    cout << "Sum in base " << base << ": " << sumDigits << endl;
    cout << "Difference in base " << base << ": " << diffDigits << endl;
}
