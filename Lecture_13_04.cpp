// Lecture_17_04.cpp
#include<iostream>
using namespace std;
int main()
{
    /* Solving the power of two */
    // Question link --https://leetcode.com/problems/power-of-two/submissions/
    return 0 ;
}
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1)
        return 0;
        while(n!=1)
        {
            if ( n%2==1)
            return 0;

            n=n/2;
        }
        return 1;
    }
};