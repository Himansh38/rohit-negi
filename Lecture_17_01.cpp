#include<iostream>
using namespace std;
int main()
{
    /*adding the 2 digit number with it-self*/
    //logic of the question --https://leetcode.com/problems/add-digits/submissions/
     while(num>9){
            int rem , ans=0;

            while(num!=0)
            {
                rem= num%10;
                num/=10;
                ans+=rem;

            }
            num = ans;
        }
        return num;
}
