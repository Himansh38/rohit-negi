#include<iostream>
using namespace std;

// sqaure of 2
int main()
{
    int n ;
    cout<<"Enter the number:";
    cin>>n;
    return n<1 ?: (n&(n-1)) ==0 ? true:false;
    // cout<<"the output is"<<n;
    return n ;
}