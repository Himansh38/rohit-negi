#include<iostream>
#include<climits> // Include this header for INT_MIN

using namespace std;

//largest element in array
int main()
{
    int n, arr[n] = {1,2,3,4,5};
    int ans= INT_MIN;
    for (int i =0;i<n; i++)
    {
        if(arr[i]>ans)
        ans= arr[i];
    }
    cout<<ans<<endl;
    return 0 ;
}