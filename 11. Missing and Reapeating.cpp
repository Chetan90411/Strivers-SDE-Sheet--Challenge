#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	pair<int,int> ans;
	int a[n+1]={0};
	
	for(int i=0;i<n;i++)
	{
		a[arr[i]]++;
	}

	for(int i=1;i<=n;i++)
	{
		if(a[i] == 2)
		{
			ans.second=i;
		}
		else if(a[i] == 0)
		{
			ans.first=i;
		}
	}
	return ans;
}
