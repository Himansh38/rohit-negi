#include<iostream>
using namespace std;
// Swap kth element of an array 
int main()
{
    int n, arr[n] = {1,2,3,4,5,6}, k = 3;
    // main logic
       int temp = arr[k-1];
	    arr[k-1] = arr[n-k];
	    arr[n-k] = temp;
	    return;
}