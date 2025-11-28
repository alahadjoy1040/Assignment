#include <iostream>
#include <cmath>
using namespace std;

bool isArm(int n){
    int t = n, sum = 0, d = 0;
    while(t){ d++; t /= 10; }
    t = n;
    while(t){
        int r = t % 10;
        sum += pow(r, d);
        t /= 10;
    }
    return sum == n;
}

int main() {
    int l, r;
    cin >> l >> r;
    for(int i = l; i <= r; i++)
        if(isArm(i)) cout << i << " ";
}

