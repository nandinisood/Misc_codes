//Program to print all substrings of a word.
#include<iostream>
#include<string.h>
using namespace std;
void allsubstrings(string s, int n)
{
	int i,j;
	for (j=0; j<n; j++)
	{
		for (i=1; i<(n-j+1); i++)
		{
			cout<<s.substr(j,i)<<endl;
		}
	}
}
int main()
{
	string str;
	cout<<"Enter a word: ";
	cin>>str;
	cout<<str<<endl<<"__________________"<<endl;
	allsubstrings(str,str.length());
	return 0;
}