// Lecture_15_01.cpp
#include<iostream>
using namespace std;
char convert(char name)
{
    char ans ;
    ans = name - 'a'+'A';
    return ans;
}
int main()
{
    char name ;
    cin >>name;
    cout << convert(name);
 
}