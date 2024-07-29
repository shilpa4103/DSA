#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr,int start,int mid,int end){
    int left=mid-start+1;
    int right=end-mid;
    vector<int>arr1(left);
    vector<int>arr2(right);

    for(int i=0;i<left;i++){
        arr1[i]=arr[start+i];

    }
    for(int j=0;j<right;j++){
        arr2[j]=arr[mid+j+1];
    }
    int i=0;
    int j=0;
    int k=start;
    while(i<left&&j<right){
        if(arr1[i]<=arr2[j]){
            arr[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr[k]=arr2[j];
            j++;
            k++;
        }

    }
    while(i<left){
        arr[k]=arr1[i];
        i++;
        k++;
    }
    while(j<right){
        arr[k]=arr2[j];
        j++;
        k++;
    }
}
void mergeSort(vector<int>&arr,int start,int end){
    if(start<end){
    int mid=(start+end)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
    }
}

int main(){
    vector<int>arr={62,32,31,8,-1};
    int n=arr.size();
    int start=0;
    int end=n-1;
    mergeSort(arr,start,end);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
