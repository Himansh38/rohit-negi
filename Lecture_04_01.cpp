#include<iostream>
using namespace std;
int main()
{
    int package ;
    cout<<"Enter the package price: ";
    cin>> package;
    if (package> 10)
    {
        cout<<"accepted";
    }
    else{
        cout<<"rejected";
    }
   return 0 ;
}