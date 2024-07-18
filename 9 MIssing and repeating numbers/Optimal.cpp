#include<bits/stdc++.h>
using namespace std;

vector<int>findMissRepeat(vector<int> arr,int n){
    int s=(n*(n+1))/2;
    int s_sq=(n*(n+1)*(2*n+1))/6;
    int s1=0;int s2=0;
    for(int i=0;i<n;i++){
        s1 +=arr[i];
        s2 +=arr[i]*arr[i];
    }
    int val1=s-s1;
    int val2=s_sq-s2;
    val2=val2/val1;
    int x=(val1+val2)/2;
    int y=x-val1;
    return {x,y};
}
int main(){
    vector<int>arr={1,1,2,4,5};
    int n=arr.size();
    vector<int>ans=findMissRepeat(arr,n);
    cout<<ans[0];
    cout<<ans[1];
    return 0;
}

//Time Complexity: O(N)
//Space Complexity :O(1)