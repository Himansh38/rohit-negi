#include<iostream>
using namespace std;
// count smaller element 
int main()
{
    int n , arr[n]={1,2,4,5,5,3}, x;
    cin>>x;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=x){
            count++;
        }
    }
    return count;
}