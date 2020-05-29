#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b)
{
	int temp=(*a);
	(*a)=(*b);
	(*b)=temp;
}

void selection_sort(int *arr,int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min_index=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				min_index=j;
			}
			swap(&arr[i],&arr[min_index]);
		}
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
	selection_sort(arr,n);
	print_array(arr,n);
	delete [] arr;
}
