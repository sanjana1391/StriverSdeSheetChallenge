#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
      
    int mx=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        
        sum=sum+arr[i];
        mx=max(sum,mx);
        if(sum<0){
            sum=0;
        }
        
    }
    return mx;
}
