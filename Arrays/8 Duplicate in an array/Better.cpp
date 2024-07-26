#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>&arr){
    int n=arr.size();
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
        if(mpp[arr[i]]==2){
            return arr[i];
        }
    }


}

int main(){
    vector<int>arr={4,3,1,2,2};
    int ans=findDuplicate(arr);
    cout<<ans;
    return 0;
}

//Time complexity : O(n);
//Space complexity : O(n);