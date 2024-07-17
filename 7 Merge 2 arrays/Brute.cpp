#include<bits/stdc++.h>
using namespace std;

void mergeArrays(vector<int>&arr1,vector<int>&arr2,int n,int m){
    vector<int>arr3(n+m);
    int left=0;
    int right=0;
    int index=0;

    // Merging the arrays
    while(left<n && right<m){
        if(arr1[left]<=arr2[right]){
            arr3[index]=arr1[left];
            index++;
            left++;
        }
        else{
            arr3[index]=arr2[right];
            right++;
            index++;
        }
    }
    while(left<n){
        arr3[index]=arr1[left];
        index++;
        left++;
    }
    while(right<m){
        arr3[index]=arr2[right];
        right++;
        index++;
    }

    // Fill back the elements from arr3[] to arr1[] and arr2[]:
    for(int i=0;i<n;i++){
        arr1[i]=arr3[i];
     
    }
    for(int i=n;i<n+m;i++){
        arr2[i-n]=arr3[i];
     
    }

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


//Time Complexity: O(n+m) + O(n+m), where n and m are the sizes of the given arrays.
//Reason: O(n+m) is for copying the elements from arr1[] and arr2[] to arr3[]. And another O(n+m) is for filling back the two given arrays from arr3[].
//Space Complexity: O(n+m)
