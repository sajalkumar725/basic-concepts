#include<bits/stdc++.h>
using namespace std;

void merge(int *arr,int start,int end)
{
	int mid=start+(end-start)/2;
	int i=start;
	int j=mid+1;
	int k=start;
	int size=end-start+1;
	int *temp=new int[size];
	while(i<=mid && j<=end)
	{
		if(arr[i]<arr[j])
		{
			temp[k++]=arr[i++];
		}
		else
		{
			temp[k++]=arr[j++];
		}
	}
	while(i<=mid)
	{
		temp[k++]=arr[i++];
	}
	while(j<=end)
	{
		temp[k++]=arr[j++];
	}
	for(i=start;i<=end;i++)
	{
		arr[i]=temp[i];
	}
	delete [] temp;
}

void merge_sort(int *arr,int start,int end)
{
	if(start>=end)
	{
		return;
	}
	int mid=start+(end-start)/2;
	merge_sort(arr,start,mid);
	merge_sort(arr,mid+1,end);
	merge(arr,start,end);
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
	merge_sort(arr,0,n-1);
	print_array(arr,n);
	delete [] arr;
}
