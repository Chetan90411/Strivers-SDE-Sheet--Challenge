#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    int el1,el2,cnt1=0,cnt2=0;
	int n=arr.size();

	for(int i=0;i<n;i++)
	{
		if(cnt1 == 0 && arr[i] != el2)
		{
			cnt1=1;
			el1=arr[i];
		}
		else if(cnt2 == 0 && arr[i] != el1)
		{
			cnt2=1;
			el2=arr[i];
		}
		else if(el1 == arr[i])
		cnt1++;
		else if(el2 == arr[i])
		cnt2++;
		else
		{
			cnt1--;cnt2--;
		}
	}
	vector<int> ans;
	cnt1=0;cnt2=0;
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]==el1) cnt1++;
		if(arr[i]==el2) cnt2++;
	}

	int mini=(n/3)+1;
	if(cnt1 >= mini) ans.push_back(el1);
	if(cnt2 >= mini) ans.push_back(el2);

	sort(ans.begin(),ans.end());
	return ans;
}
