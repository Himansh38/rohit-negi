#include<iostream>
using namespace std;
int main()
{
    /* Solving the  Complement of Base 10 inteager*/
    // Question link --https://leetcode.com/problems/complement-of-base-10-integer/description/
    return 0 ;
}
class Solution {
public:
    int bitwiseComplement(int n) {
        
        if (n==0)
        return 1;
        int rem, mul=1, ans=0;

        while (n)
        {
            rem = n%2;
            rem = rem^1;
            n/=2;
            ans =  ans + rem * mul;
            mul*=2;

        }
        return ans;
    }
};