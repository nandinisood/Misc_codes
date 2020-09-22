// Program to print the nearest integer to 0 from the integers in the array.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,*arr,k;
    cout<<"Enter size: ";
    cin>>n;
    arr=new int[n];
    
    
    cout<<"\nEnter the array : ";
    for (i=0; i<n; i++)
        cin>>arr[i];
    cout<<"\n";
    sort(arr,arr+n);
     for (i=0; i<n; i++)
        cout<<arr[i]<<" ";
    k=0;
    while ((arr[k])<0)
    k++;
    if (abs(arr[k-1])<arr[k])
    cout<<"\n"<<arr[k-1];
    else
    {
        cout<<"\n"<<arr[k];
    }
    
    return 0;
}
