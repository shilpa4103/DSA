#include<bits/stdc++.h>
using namespace std;

vector<int>selectionSort(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        if(mini!=i){
            swap(arr[i],arr[mini]);
        }
    }
    return arr;
}

int main(){
    vector<int>arr={62,32,31,8,-1};
    int n=arr.size();
    sort(arr,arr+n);
    vector<int>ans=selectionSort(arr);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}

//Time Complexity O(N^2)
//Space Complexity O(1)
//Not stable
//inplace