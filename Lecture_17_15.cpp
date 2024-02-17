#include<iostream>
using namespace std;
// Count Odd Even - Java

int main()
{
      int n , a[n]={1,2,4,5,5,3};
    int odd=0,even=0;
        for(int i=0; i<n;i++)
        {
            if(a[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
            
        
        }
        cout<<odd<<' '<<even;
        
    return 0 ;
}