#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={0,1,2,1,0,0,1,2,2};
    int n=arr.size();
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
    return 0;
}

//Time complexity:O(nlogn)
//space complexity:O(1)