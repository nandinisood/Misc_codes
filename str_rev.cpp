#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int len,i;
    cout<<"Enter string: ";
    getline(cin,s);
    len=s.length();
    for (i=len-1; i>=0; i--)
    {
        cout<<s[i];
    }
    return 0;
}