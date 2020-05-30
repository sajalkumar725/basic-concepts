/*
Given a number n, count minimum steps to minimize it to 1 according to the following criteria:
->If n is divisible by 2 then we may reduce n to n/2.
->If n is divisible by 3 then you may reduce n to n/3.
->Decrement n by 1
*/
#include<bits/stdc++.h>
using namespace std;

int min_steps_to_one(int n,int *dp)
{
	int ans1=INT_MAX,ans2=INT_MAX,ans3=INT_MAX;
	if(n==0 || n==1)
	{
		return 0;
	}
	if(dp[n]!=-1)
	{
		return dp[n];
	}
	ans1=min_steps_to_one(n-1,dp)+1;
	if(n%3==0)
	{
		ans2=min_steps_to_one(n/3,dp)+1;
	}
	if(n%2==0)
	{
		ans3=min_steps_to_one(n/2,dp)+1;
	}
	int ans=min(ans1,min(ans2,ans3));
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
	cout<<min_steps_to_one(n,dp);
	delete [] dp;
}
