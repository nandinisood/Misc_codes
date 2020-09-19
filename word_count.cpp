//Program to print the number of words in the entered paragraph.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string para;
    int word=0,i,len;
    cout<<"Enter a Paragraph: \n";
    getline(cin,para);
    len=para.length();
    for (i=0; i<len; i++)
    {
        if (para[i]==' ')
            word++;
    }
    cout<<"\n\nNumber of words= "<<word+1;
    return 0;
}