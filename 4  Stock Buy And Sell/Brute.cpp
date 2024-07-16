#include<bits/stdc++.h>
using namespace std;

int buyandsell(vector<int>arr,int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int val=0;
            if(arr[j]>arr[i]){
                val=arr[j]-arr[i];
                maxi=max(maxi,val);

            }
        }
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

//Time complexity:O(N^2)
//Space complexity:O(1)