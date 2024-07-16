#include<bits/stdc++.h>
using namespace std;


int maxSubarraysum(vector<int> arr,int n){
    int maxi=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        maxi=max(sum,maxi);
        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}
int main(){
    vector<int>arr={ -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n=arr.size();
    int sum=maxSubarraysum(arr,n);
    cout<<sum;
    return 0;
}

//Time complexity:O(N)
//Space complexity:O(1)