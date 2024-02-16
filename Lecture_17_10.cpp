#include<iostream>
using namespace std;
// Find the total number of Squares in a N*N chessboard.
int main()
{   
    int N;
    cout<<"Enter the number:";
    cin>>N;
    long long ans = 0;
        for(int i=1; i<= N; i++){
            ans+= (N-i+1)*(N-i+1);
        }
        cout<<"answer:"<<ans<<endl;
    // return 0 ;
}