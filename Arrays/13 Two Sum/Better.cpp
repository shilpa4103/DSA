#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>&arr,int n,int target){
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        int extra=target-arr[i];
        if(mpp.find(extra)==mpp.end()){
            mpp[arr[i]]=i;
        }
        else{
            return {mpp[extra],i};
        }
    }
    return {-1,-1};
}

int main(){
    vector<int>arr={2, 6, 5, 8, 11};
    int target=14;
    int n=arr.size();
    vector<int>ans=twoSum(arr,n,target);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}

//Time Complexity: O(N)
//Space Complexity:O(N)