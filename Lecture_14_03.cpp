#include<iostream>
using namespace std;
void Swap( int &x, int &y ) // parameter 
{
    int z ;
    z=x;
    x=y;
    y=z;
}
void Swap ( float &x , float &y)  // Function overloading 
{
    float z;
    z=x;
    x=y;
    y=z;
}
int main()
{
    // Swap two numbers
    int a, b;
    cout<< " Enter two numbers "<<endl ;
    cin>> a>> b;

    Swap(a,b);
    cout<<a<<" "<<b;

    float f1, f2;

    f1 = 3.14, f2 = 2.414;
    Swap(f1,f2);
    cout << f1<<f2;

    return 0 ;
}
