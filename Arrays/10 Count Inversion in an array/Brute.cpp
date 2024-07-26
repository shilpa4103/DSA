#include<bits/stdc++.h>
using namespace std;

int countInversion(vector<int>arr,int n){
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                cnt++;
            }
        }
    }
    return cnt;
}

int main(){
    vector<int>arr({5,4,3,2,1});
    int n=arr.size();
    int ans=countInversion(arr,n);
    cout<<ans;
    return 0;
}

//Time complexity: O(N^2)
//Space complexity :O(1)