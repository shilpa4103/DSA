#include<bits/stdc++.h>
using namespace std;

int maxElement(vector<int>arr){
    int maxel=INT_MIN;
    for(int i=0;i<arr.size();i++){
            if(arr[i]>maxel){
            maxel=max(maxel,arr[i]);
            }
    }
    return maxel;
}

int minElement(vector<int>arr){
    int minel=INT_MAX;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<minel){
            minel=min(minel,arr[i]);
    }
    }
    return minel;
}

int maxArr(vector<int>&arr,int n){
    unordered_map<int,int>map;
    for(int i=0;i<n;i++){
        map[arr[i]]=i;
    }
    int max=maxElement(arr);
    int min=minElement(arr);
    int res=0;
    for(int i=0;i<n;i++){
        int n=map[max];
        int m=map[min];
        res=abs(n-m);
    }
    return res;
}

int main(){
    vector<int>arr={-1,-3,4,10,-6,15,25};
    int n=arr.size();
    int ans=maxArr(arr,n);
    cout<<ans;

    return 0;
}