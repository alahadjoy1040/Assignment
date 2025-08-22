#include <iostream>
using namespace std;

int main() {
    double p, r, t, ci;
    cout << "Enter Principal, Rate, Time: ";
    cin >> p >> r >> t;
    ci = p * pow((1 + r / 100), t) - p;
    cout << "Compound Interest = " << ci;
    return 0;
}

