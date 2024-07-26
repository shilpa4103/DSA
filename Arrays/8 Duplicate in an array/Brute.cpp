#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>&arr){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            return arr[i];
        }
    }
}

int main(){
    vector<int>arr={4,3,1,2,1};
    int ans=findDuplicate(arr);
    cout<<ans;
    return 0;
}

//Time complexity : O(nlogn)+O(n)
//Space complexity : O(1)