#include<bits/stdc++.h>
using namespace std;

int partition(int *arr,int start,int end)
{
	int i=start-1;
	int pivot=arr[end];
	int j;
	for(j=start;j<end;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[end]);
	return i+1;
}

void quick_sort(int *arr,int start,int end)
{
	if(start>=end)
	{
		return;
	}
	int pivot=partition(arr,start,end);
	quick_sort(arr,start,pivot-1);
	quick_sort(arr,pivot+1,end);
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
	quick_sort(arr,0,n-1);
	print_array(arr,n);
	delete [] arr;
}
