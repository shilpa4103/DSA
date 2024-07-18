#include<bits/stdc++.h>
using namespace std;

vector<int>findMissRepeat(vector<int> arr,int n){
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    int missing=-1,repeating=-1;
    for(int i=1;i<=n;i++){
        if(mpp[i]==2){
            repeating=i;
        }
        else if(mpp[i]==0){
            missing=i;
        }
        if(missing!=-1 && repeating!=-1){
            break;
        }
    }
    return {missing,repeating};
}
int main(){
    vector<int>arr={1,1,2,4,5};
    int n=arr.size();
    vector<int>ans=findMissRepeat(arr,n);
    cout<<ans[0];
    cout<<ans[1];
    return 0;
}

//Time Complexity: O(2N)
//Space Complexity :O(N)