#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>mergeIntervals(vector<vector<int>>&arr,int n){
    //sort the given intervals:
    sort(arr.begin(),arr.end());

    vector<vector<int>>ans;

     // select an interval:
    for(int i=0;i<n;i++){
        int start=arr[i][0];
        int end=arr[i][1];
        
        //Skip all the merged intervals:
        if(!ans.empty()&&end<=ans.back()[1]){
            continue;
        }

        //check the rest of the intervals:
        for(int j=i+1;j<n;j++){
            if(arr[j][0]<=end){
                end=max(end,arr[j][1]);
            }
            else{
                break;
            }
        }
        ans.push_back({start,end});
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

//Time complexity: O(N*logN) + O(2*N)
//space complexity: O(N)