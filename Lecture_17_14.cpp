#include<iostream>
#include <vector>

using namespace std;
// Count Odd Even

int main()
{
    int n , arr[n]={1,2,4,5,5,3};
     int odd=0,even=0;
     int count;
        for(int i=0; i<n;i++)
        {
            if(arr[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
          
        }
        vector<int> count = {odd, even};
        return count;
    return 0 ;
}