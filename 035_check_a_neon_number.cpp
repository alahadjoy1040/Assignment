#include <iostream>
using namespace std;

int main() {
    int n, sq, sumOfDigits = 0;
    cout << "Enter a number: ";
    cin >> n;

    sq = n * n;
    int temp = sq;
    while(temp > 0) {
        sumOfDigits += temp % 10;
        temp /= 10;
    }

    if (sumOfDigits == n)
        cout << n << " is a Neon number.";
    else
        cout << n << " is NOT a Neon number.";

    return 0;
}
