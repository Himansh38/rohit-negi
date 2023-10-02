#include <iostream>
using namespace std;
int main()
{
    /*Write a C++ program that takes an integer as input and checks if it is even or odd. If the input number is even, the program should print "Even," and if it is odd, the program should print "Odd."*/
    int num;
    cout<<"Enter the Input";
    cin>> num;
    if ( num %2==0){
        cout<<"Input is Even";
    }
    else {
        cout<<"Input is Odd";
    }
    return 0;
}