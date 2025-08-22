#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter N: ";
    cin >> n;

    for (int i = 2; i <= n; i++) {
        bool prime = true;
        for (int a = 2; a <= i / 2; a++) {
            if (i % a == 0) {
                prime = false;
                break;
            }
        }
        if (prime) cout << i << " ";
    }
    return 0;
}

