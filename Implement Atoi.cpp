//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
          int l=s.length();
         if(s[l-1]=='-')
        {
          return -1;
        }
       for(int i=0;i<l;i++)
       {
           if(s[i]>='a'&&s[i]<='z')
           {
               return -1;
           }
           
       }
       return stoi(s);
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends
