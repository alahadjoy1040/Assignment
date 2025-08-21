#include<iostream>
using namespace std;
int main (){
    float r1,i1,r2,i2,rsum,isum;
    cout<<"enter real and imaginary part of first complex number:";
    cin>>r1>>i1;
    cout<<"enter real and imaginary part of second complex number:";
    cin>>r2>>i2;
    rsum = r1 + r2;
    isum = i1 + i2;
    cout<<"sum="<<rsum<<"+"<<isum<<"i"<<endl;
    return 0;

}
