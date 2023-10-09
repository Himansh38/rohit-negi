// Lecture_17_06.cpp
#include<iostream>
using namespace std;
int main()
{
    /* Solving the Plindrone */
    // Question link --https://leetcode.com/problems/palindrome-number/description/
    return 0 ;
}
class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0)
        return 0;
        int num=x  , rem ,ans=0;

        while ( num)
        {
            rem = num %10;
            num/=10;

            if(ans> INT_MAX/10 )  
            return 0;
            ans =ans*10+rem;
        }
        if (ans==x)
        return 1;
        else 
        return 0;
    }
};