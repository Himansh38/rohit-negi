 #include<iostream>
 using namespace std;
 int  countdigit(int n )
 {
    int cout=0;
    while(n)
    {
        cout++;
        n/=10;

    }
    return n;
 }
 bool Armstrong( int num , int digit)
 {
    int n=num, rem, ans=0;
    while(n)
    {
        rem = n%10;
        n/=10;
        ans =ans + pow(rem, digit);  
    }
    if (ans==num)
    return 1;
    else 
    return 0;
 }
 int main()
 {
    int num ;
    cin >> num;
    int digit= countdigit(num);
    cout<<Armstrong(num, digit);
     return 0 ;
 }