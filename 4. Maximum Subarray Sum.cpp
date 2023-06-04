#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long curSum=0, maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        //Adding elements
        curSum+=arr[i];  
        
        //reseting the value of curSum
        if(curSum<0)
        curSum=0;
        //Storing maximum sum
        maxSum= max(curSum,maxSum);
        
    }

    return maxSum;
}
