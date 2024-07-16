#include<bits/stdc++.h>
using namespace std;

int buyandsell(vector<int>arr,int n){
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        mini=min(mini,arr[i]);
        int val=arr[i]-mini;
        maxi=max(val,maxi);
    }
    return maxi;
}

int main(){
    vector<int>arr={7,1,5,3,6,4};
    int n=arr.size();
    int ans=buyandsell(arr,n);
    cout<<ans;
    return 0;
}

//Time complexity:O(N)
//Space complexity:O(1)