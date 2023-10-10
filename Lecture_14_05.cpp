// Lecture_18_06.cpp
#include<iostream>
using namespace std;
int reverse( int n )
{
    int ans =0;
    int reverse;
    while ( n> 0 )
    {
        reverse = n% 10;
        ans = ans*10 + reverse;
        n/= 10;
        
    }
    return ans;
}
int main()
{
    // Reverse a number n using Function, Constraints: -5000<=n<=5000
    
    int a;
    cout<<"Enter the number:"<<endl;
    cin>> a;
    
    cout << reverse(a);
    return 0 ;
}