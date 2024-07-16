#include<bits/stdc++.h>
using namespace std;


vector<int>sortArray(vector<int>&arr,int n){
    //0 to low-1 all 0's
    //low to mid-1 all 1's
    //high+1 to n-1 all 2's

    //Dutch flag algorithm
    //Three pointers low,mid,high
    int low=0;
    int mid=0;
    int high=n-1;

    //loop should run untill the mid cross high
    while(mid<=high){
        //check the arr[mid] if it is zero swap with low then move low to right and mid to right
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        //check the arr[mid] if it is one then move mid to right
        else if(arr[mid]==1){
            mid++;
        }
        //check the arr[mid] if it is two swap with high then move high to left
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
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

//Time complexity:O(N)
//Space complexity:O(1)