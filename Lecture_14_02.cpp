// Lecture_18_03.cpp
#include<iostream>
using namespace std;
int add ( int a , int b)
{
    int ans ;
    ans = a+b;
    return ans ;
}
int sub ( int a , int b)
{
    int ans ;
    ans = a-b;
    return ans ;
}int mul ( int a , int b)
{
    int ans ;
    ans = a*b;
    return ans ;
}
int main()
{
    int a ,b ;
    cout<< "Enter two number"<<endl;
    cin >> a>> b;

    cout<<add(a,b)<<endl;
    cout<<sub(a,b)<<endl;
    cout<<mul(a,b)<<endl;
    return 0 ;
}