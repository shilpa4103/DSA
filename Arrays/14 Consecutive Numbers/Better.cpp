#include<bits/stdc++.h>
using namespace std;

int consecutiveArr(vector<int>&arr,int n){
    sort(arr.begin(),arr.end());
    int maxi=1;
    int lastSmall=INT_MIN;
    int cnt=0;

    for(int i=0;i<n;i++){
        if(arr[i]-1==lastSmall){
            cnt++;
            lastSmall=arr[i];
        }
        else if(arr[i]!=lastSmall){
            cnt=1;
            lastSmall=arr[i];
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
