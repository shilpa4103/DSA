#include<bits/stdc++.h>
using namespace std;

bool ls(vector<int>&arr,int key){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}

int consecutiveArr(vector<int>&arr,int n){
    int maxi=1;
    for(int i=0;i<n;i++){
        int cnt=1;
        int x=arr[i];
        while(ls(arr,x+1)==true){
            x=x+1;
            cnt=cnt+1;
        }
        maxi=max(maxi,cnt);
    }
    return maxi;
}

int main(){
    vector<int>arr={3, 8, 5, 7, 6};
    int n=arr.size();
    int num=consecutiveArr(arr,n);
    cout<<num;
    return 0;
}
