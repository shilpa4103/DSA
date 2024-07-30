#include<bits/stdc++.h>
using namespace std;

void quickSort(vector<int>&arr){
    
}

int main(){
    vector<int>arr={62,32,31,8,-1};
    int n=arr.size();
    vector<int>ans=quickSort(arr);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
