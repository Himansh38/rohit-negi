#include<iostream>
using namespace std;

//Cyclically rotate an array by one 
int main()
{
    int n ;
    int arr[100] ={1,2,3,4,5,6,};
    //main logic
    int last = arr[n-1];
    
    for(int i= n-2; i>=0 ; i--)
    arr[i+1]= arr[i];
    
    arr[0] = last;
    return 0 ;
}