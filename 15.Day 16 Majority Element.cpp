#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	int cnt=0,el;
	for(int i=0;i<n;i++)
	{
		if(cnt == 0)
		{
			el=arr[i];
			cnt++;
		}
		else if(arr[i] == el)
		{
			cnt++;
		}
		else
		{
			cnt--;
		}
	}
	cnt=0;

	for(int i=0;i<n;i++)
	{
		if(arr[i] == el)
		cnt++;
	}

	int mini=(n/2)+1;
	if(cnt >= mini)
	return el;
	else
	return -1;
}
