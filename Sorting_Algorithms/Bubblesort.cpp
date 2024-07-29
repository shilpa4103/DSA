#include<bits/stdc++.h>
using namespace std;

vector<int>bubbleSort(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return arr;
}


int main(){
    vector<int>arr={62,32,31,8,-1};
    int n=arr.size();
    vector<int>ans=bubbleSort(arr);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}

//Time complexity:O(n^2)
//space complexity:O(n^2)
//Inplace
//Stable