#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>&arr,int n,int target){
    vector<int>ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
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

//Time Complexity: O(N^2)
//Space Complexity:O(1)