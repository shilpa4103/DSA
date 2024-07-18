#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> arr) {

    //size of the given array:
    int n = arr.size();
    int val=n/2;
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;

        if(mpp[arr[i]]>val){
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}


//Time complexity : O(N)
//space complexity : O(N)