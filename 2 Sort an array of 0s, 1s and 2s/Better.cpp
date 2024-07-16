#include<bits/stdc++.h>
using namespace std;


vector<int>sortArray(vector<int>&arr,int n){
    int cnt0=0;
    int cnt1=0;
    int cnt2=0;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cnt0++;
        }
        else if(arr[i]==1){
            cnt1++;
        }
        else{
            cnt2++;
        }
    }

    for(int i=0;i<cnt0;i++){
        arr[i]=0;
    }
    for(int i=cnt0;i<cnt0+cnt1;i++){
        arr[i]=1;
    }
    for(int i=cnt0+cnt1;i<cnt0+cnt1+cnt2;i++){
        arr[i]=2;
    }

    return arr;

}
int main(){
    vector<int>arr={0,1,2,1,0,0,1,2,2};
    int n=arr.size();
    vector<int>res=sortArray(arr,n);
    for(int i=0;i<n;i++){
        cout<<res[i]<<" "; 
    }
    return 0;
}

//Time complexity:O(N) + O(N)
//Space complexity:O(1)