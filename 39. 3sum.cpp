#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	sort(arr.begin(),arr.end());
	set<vector<int>> s;

	for(int i=0;i<n;i++)
	{
		if(i > 0 && arr[i] == arr[i-1]) continue;
		int j=i+1;
		int k=n-1;

		while(j < k)
		{
			int sum = arr[i] + arr[j] + arr[k];

			if(sum == K)
			{
				vector<int> temp = {arr[i], arr[j], arr[k]};
				s.insert(temp);
				j++;
				k--;
			}
			else if(sum < K)
			j++;
			else
			k--;
		}
	}
	vector<vector<int>> ans(s.begin(),s.end());
	return ans;
}
