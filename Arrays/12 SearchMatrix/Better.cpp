#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int>&nums,int target){
    int n=nums.size();
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target){
            return true;
        }
        else if(target<nums[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return false;
}
bool checkNumber(vector<vector<int>>&matrix,int target){
    int n=matrix.size();
    int m=matrix[0].size();
    for (int i=0;i<n;i++){
        if(matrix[i][0]<=target&&matrix[i][m-1]>=target){
            return binarySearch(matrix[i],target);
        }
    }
    return false;
}

int main(){
    vector<vector<int>>matrix={{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    checkNumber(matrix, 5) == true ? cout << "True\n" : cout << "False\n";
    return 0;
}

// Time Complexity: O(N + logM), where N = given row number, M = given column number.
// Reason: We are traversing all rows and it takes O(N) time complexity. But for all rows, we are not applying binary search rather we are only applying it once for a particular row. That is why the time complexity is O(N + logM) instead of O(N*logM).

// Space Complexity: O(1) as we are not using any extra space.