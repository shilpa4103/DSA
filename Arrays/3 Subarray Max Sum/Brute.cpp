#include<bits/stdc++.h>
using namespace std;


int maxSubarraysum(vector<int> arr,int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum=sum+arr[k];
            }
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

//Time complexity:O(N^3)
//Space comlexity:O(1)