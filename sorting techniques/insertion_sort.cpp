#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int *arr,int n)
{
	for(int i=1;i<n;i++)
	{
		int j=i-1;
		int temp=arr[i];
		while(j>=0 && arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	return;
}

void print_array(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int n;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	insertion_sort(arr,n);
	print_array(arr,n);
	delete [] arr;
}
