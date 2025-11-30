#include <iostream>
using namespace std;

int main() {
    int n, reversedNumber = 0, originalN, remainder;

    cout << "Enter an integer: ";
    cin >> n;
    originalN = n;

    while(n > 0) {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }

    if (originalN == reversedNumber)
        cout << originalN << " is a Palindrome number.";
    else
        cout << originalN << " is NOT a Palindrome number.";

    return 0;
}
