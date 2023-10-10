#include<iostream>
using namespace std;
int cube(int a)
{
    int ans =0;
    ans =a*a*a;
    return ans ;
}
int main()
{
// Find the cube of a number using Function
    int c ;
    cout<< "Enter the number:";
    cin >> c;
    cout<<cube(c);
    return 0 ;
}
