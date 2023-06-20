#include "lib.h"

int main() {
    int x, y, base;

    cout << "Enter the value of X: ";
    cin >> x;
    cout << "Enter the value of Y: ";
    cin >> y;
    cout << "Enter the base (2-36): ";
    cin >> base;

    calculateSumDifference(x, y, base);

    return 0;
}
