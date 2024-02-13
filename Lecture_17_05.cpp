#include<iostream>
#include<climits>
using namespace std;
int main()
{

    int n, arr[n] ={1,2,3,4,5,6};
    int ans = INT_MIN;

    for (int i=0; i<n; i++){
        if(arr[i]>ans)
        ans = arr[i];

    }
    //second largest

    int second = INT_MIN;
    for(int i=0;i<n; i++)
    {
        if (arr[i]!= ans)
        second = max(second, arr[i]);
    }
    cout<<second<<endl;
    return 0 ;
}