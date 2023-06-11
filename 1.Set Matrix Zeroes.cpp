#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Store the length of the matrix
	int n=matrix.size();
	int m=matrix[0].size();
	int col0=1;
	//loop to mark the zeros in the first row and column 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(matrix[i][j] == 0)
			{
				//make the ith row equal to zero
				matrix[i][0]=0;
				//make the jth row or col0 equal to zero
				if(j != 0)
				matrix[0][j]=0;
				else
				col0=0;
			}
		}
	}
	//loop to make the elements as 0 except the 1st row and column if they are not based on 1st row and 1st column
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<m;j++)
		{
			if(matrix[i][j] != 0)
			{
				if(matrix[i][0] == 0 || matrix [0][j] == 0)
				matrix[i][j]=0;
			}
		}
	}
	//now check and change the 1st row and column according to the first element and col0
	if(matrix[0][0] == 0)
	{
		for(int i=0;i<m;i++)
		matrix[0][i]=0;
	}

	if(col0 == 0)
	{
		for(int i=0;i<n;i++)
		matrix[i][0]=0;
	}

}
