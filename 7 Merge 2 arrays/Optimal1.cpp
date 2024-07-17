#include<bits/stdc++.h>
using namespace std;

void mergeArrays(vector<int>&arr1,vector<int>&arr2,int n,int m){
    int left=n-1;
    int right=0;
    while(left>0 && right<m){
        if(arr1[left]>arr2[right]){
            swap(arr1[left],arr2[right]);
            left--;
            right++;
        }
        else{
            break;
        }
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
}


int main(){
    vector<int>arr1={1,4,8,10};
    vector<int>arr2={2,3,9};
    int n=arr1.size();
    int m=arr2.size();
    mergeArrays(arr1,arr2,n,m);
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<m;i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
}

//Time Complexity: O(min(n, m)) + O(n*logn) + O(m*logm), where n and m are the sizes of the given arrays.
//Reason: O(min(n, m)) is for swapping the array elements. And O(n*logn) and O(m*logm) are for sorting the two arrays.

//Space Complexity: O(1) as we are not using any extra space.
