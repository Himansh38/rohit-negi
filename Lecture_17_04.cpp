#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    long long  a[n]= {1,2,3,4,5};
   long long ans = INT_MAX;
        for(int i =0; i<n;i++){
            if(a[i]<ans)
            ans=a[i];
            
        }
 
        long long ans1 = INT_MIN;
        for (int i=0; i<n; i++)
            if(a[i]>ans1){
                ans1=a[i];
            
        }
        
       pair<long long, long long> PAIR1;
       
       // first part of the pair
    PAIR1.first = ans;
    // second part of the pair
    PAIR1.second = ans1;
    
    // Printing the result
    cout << "Minimum value: " << PAIR1.first << endl;
    cout << "Maximum value: " << PAIR1.second << endl;
    return 0 ;
}