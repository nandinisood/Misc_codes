#include<iostream>
using namespace std;

void findConnectingCenters(int **arr,int n)// arr is the given adjacency matrix of size nxn and n is the number of cities
{

    // WRITE YOU CODE HERE.

    // Print connecting centers in ascending order separated by a single whitespace.
    int i,j,a[n],count,max,max_val;
    for (i=0; i<n; i++)
    {
            count=0;
            for (j=0; j<n; j++)
            {
                    if (arr[i][j]==1)
                        count++;
            }
            a[i]=count;
    }
    max=0;
    for (i=0; i<n; i++)
    {
            if (a[max]<a[i])
            max=i;
    }
    max_val=a[max];
for (i=0; i<n; i++)
{
        if (a[i]==max_val)
        cout<<i<<" ";
}}
int main(){
    int n;
    cin>>n;
    int **arr;
    arr=new int*[n];
    for(int i=0;i<n;++i){
        arr[i]= new int[n];
        for(int j=0; j<n; ++j){
            cin>>arr[i][j];
        }
    }
    findConnectingCenters(arr,n);
}
