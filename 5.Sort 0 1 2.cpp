#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Better 
   //      int cnt[3] ={0};
   //   for(int i=0;i<n;i++)
   //   {
   //       cnt[arr[i]]++;
   //   }
   
   //   for(int j=0;j<cnt[0];j++)
   //   arr[j]=0;
   //   for(int j=cnt[0];j<cnt[0]+cnt[1];j++)
   //   arr[j]=1;
   //   for(int j=cnt[1]+cnt[0];j<n;j++)
   //   arr[j]=2;
  //optimal
   int low=0,mid=0,high=n-1;
   while(mid <= high)
   {
      if(arr[mid]==0)
      {
         swap(arr[low],arr[mid]);
         mid++;low++;
      }
      else if(arr[mid]==1)
      mid++;
      else
      {
         swap(arr[mid],arr[high]);
         high--;
      }
   }
}
