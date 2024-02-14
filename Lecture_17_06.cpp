#include<iostream>
using namespace std;
int main()

// missing number in array 
{
    int n ,arr[n] = {1,3,4,5,6};
    int sum =0;
            for (int i =0 ; i<n-1 ; i++){
                sum+= arr[i];
            }
            
            int ans = n*(n+1)/2;
            
            return ans-sum;
        return 0 ;
}