#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, temp, sum = 0, digits = 0;
    cin >> n;
    temp = n;

    while(temp){
        digits++;
        temp /= 10;
    }

    temp = n;
    while(temp){
        int r = temp % 10;
        sum += pow(r, digits);
        temp /= 10;
    }

    cout << (sum == n ? "Armstrong" : "Not Armstrong");
}

