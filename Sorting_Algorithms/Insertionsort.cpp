#include<bits/stdc++.h>
using namespace std;

vector<int>insertionSort(vector<int>&arr){
    int n=arr.size();
    int j,key;
    for(int i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0&& key<arr[j]){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    return arr;
}

int main(){
    vector<int>arr={62,32,31,8,-1};
    int n=arr.size();
    vector<int>ans=insertionSort(arr);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}

//Best Time Complexity O(N)
//Worst and average Time Complexity O(N^2)
//Space Complexity O(1)
//stable
//inplace
