// Lecture_18_01.cpp
#include<iostream>

using namespace std;

int prime(int n)
{
   if (n<2) 
    return 0;

    for ( int i =2; i<n; i++)
    {
        if ( n%i== 0)
        return 0;
    }
    return 1;
}
int fact(int n )
{
    int ans =1;
    for ( int i=1; i<n; i++)
    {
        ans = ans *i;
    }
    return ans;
}
int main() 
{
    int a, b ;
    cout << " Enter two numbers"<< endl;
    cin >> a>>b;

    cout<<"The prime number of a is :"<<prime(a)<<endl;
    cout<<"The Factorial  of a is :"<<fact(a)<<endl;
    cout<<"The prime number of b is :"<<prime(b)<<endl;
    cout<<"The Factorial  of  b is :"<<fact(b)<<endl;
    cout<<"The prime number of b-a is :"<<prime(b-a)<<endl;
    cout<<"The Factorial of b-a is :"<<fact(b-a)<<endl;
    
    return 0 ;
}