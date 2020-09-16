#include<iostream>
using namespace std;
int main()
{
	int arr[10],n,i,j,sum,max_sum,curr_sum;
	cin>>n;

	for (i=0; i<n; i++)
		cin>>arr[i];
		curr_sum=arr[0];
		max_sum=arr[0];
		for (j=1; j<n; j++)
		{
			sum=curr_sum+arr[j];
			curr_sum=max(sum,arr[j]);
			if (max_sum<curr_sum)
				max_sum=curr_sum;
		}
	
	cout<<max_sum;
	return 0;
}
	