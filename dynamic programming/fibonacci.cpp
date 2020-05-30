#include<bits/stdc++.h>
using namespace std;

int fib(int n,int *dp)
{
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return 1;
	}
	if(dp[n]!=-1)
	{
		return dp[n];
	}
	int ans=fib(n-1,dp)+fib(n-2,dp);
	dp[n]=ans;
	return ans;
}

int main()
{
	int n;
	cin>>n;
	int *dp=new int[n+1];
	for(int i=0;i<n+1;i++)
	{
		dp[i]=-1;
	}
	cout<<fib(n,dp);
	delete [] dp;
}
