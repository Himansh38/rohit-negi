#include<iostream>
using namespace std;
int main()
{
    int n, sq;
    int num =n; 
    cout<<"Enter the number and square of the number ";
    cin >> n>> sq;
    for (int i =1;i <= sq; i++){
        num = num*n;
    }
    cout<< "Squared value is :"<<num;
    return 0 ;
}