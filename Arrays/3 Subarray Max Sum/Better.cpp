#include<bits/stdc++.h>
using namespace std;


int maxSubarraysum(vector<int> arr,int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            maxi=max(maxi,sum);
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

//Time complexity:O(N^2)
//Space comlexity:O(1)