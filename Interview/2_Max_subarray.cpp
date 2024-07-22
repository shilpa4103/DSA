#include <bits/stdc++.h>
using namespace std;

int maxproduct(vector<int>& nums) {
        int pref = 1;
        int maxi = INT_MIN;
        int suf = 1;
        int n = nums.size();
        
        for(int i = 0; i < nums.size(); i++) {
            if(pref == 0) {
                pref = 1;
            }
            if(suf == 0) {
                suf = 1;
            }
            pref = pref * nums[i];
            suf = suf * nums[n - i - 1];
            maxi = max(maxi, max(pref, suf));
        }
        
        return maxi;
    }

int main() {
    vector<int> arr = {-1, -2, -3, 0};
    int n = arr.size();
    int ans = maxproduct(arr);
    cout << ans << endl;  // Output should be 6

    return 0;
}
