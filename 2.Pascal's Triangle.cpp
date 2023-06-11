#include <bits/stdc++.h>
//function to generate the row of Pascal triangle
vector<long long int> generateRow(int row)
{
  vector<long long int> ansRow;
  ansRow.push_back(1);
  long long int ans=1;

  for(int i=1;i<row;i++)
  {
    ans *= (row-i);
    ans /= i;
    ansRow.push_back(ans);
  }
  return ansRow;
}
vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> ans;
  for(int i=1;i<=n;i++)
  {
    ans.push_back(generateRow(i));
  }
  return ans;
}
