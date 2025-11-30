#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm, sum = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            cout << t1 << ", ";
            nextTerm = t1;
        } else if (i == 2) {
            cout << t2 << ", ";
            nextTerm = t2;
            sum += nextTerm;
        } else {
            nextTerm = t1 + t2;
            cout << nextTerm << ", ";
            t1 = t2;
            t2 = nextTerm;

            if (i % 2 == 0) {
                sum += nextTerm;
            }
        }
    }
    cout << "..." << endl;
    cout << "Sum of Fibonacci numbers at even indexes: " << sum << endl;
    return 0;
}
