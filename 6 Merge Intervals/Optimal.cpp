#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>mergeIntervals(vector<vector<int>>&arr,int n){
    //sort the given intervals:
    sort(arr.begin(),arr.end());

    vector<vector<int>>ans;

    for(int i=0;i<n;i++){
        // if the current interval does not
        // lie in the last interval:
        if(ans.empty()||ans.back()[1]<arr[i][0]){
            ans.push_back(arr[i]);
        }
        // if the current interval
        // lies in the last interval:
        else{
            ans.back()[1]=max(ans.back()[1],arr[i][1]);
        }
    }
    return ans;

}

int main(){
    vector<vector<int>>arr={{1, 3}, {8, 10}, {2, 6}, {15, 18}};
    int n=arr.size();
    vector<vector<int>> ans = mergeIntervals(arr,n);
    for(int i=0;i<n;i++){
        cout<<"["<<ans[i][0]<<","<<ans[i][1]<<"]";
    }
    return 0;
}

//Time complexity: O(N*logN) + O(N)
//space complexity: O(N)