#include <iostream>
#include <cmath>
using namespace std;

bool isArm(int n){
    int temp = n, sum = 0, d = 0;
    while(temp){ d++; temp /= 10; }

    temp = n;
    while(temp){
        int r = temp % 10;
        sum += pow(r, d);
        temp /= 10;
    }
    return sum == n;
}

int main() {
    for(int i = 1; i <= 1000; i++)
        if(isArm(i)) cout << i << " ";
}

