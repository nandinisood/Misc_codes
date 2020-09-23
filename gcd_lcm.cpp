//Program to calculate GCD and LCM of two numbers.

#include<iostream>
using namespace std;
int main()
{
    int a,b,x,i;
    cout<<"Enter the two numbers: \n";
    cin>>a>>b;
    x=a>b?b:a;
    for (i=x; i>=1; i--)
    {
        if (a%i==0 && b%i==0)
        break;
    }
    cout<<"\n\nGCD = "<<i;
    cout<<"\nLCM = "<<(a*b)/i;
    return 0;
    
}