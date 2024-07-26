#include<bits/stdc++.h>
using namespace std;

vector<int>findMissRepeat(vector<int> a,int n){
    int missing=-1,repeating=-1;
    int cnt=0;
    //Find the repeating and missing number:
    for (int i = 1; i <= n; i++) {
        //Count the occurrences:
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == i) cnt++;
        }

        if (cnt == 2) repeating = i;
        else if (cnt == 0) missing = i;

        if (repeating != -1 && missing != -1)
            break;
    }
        return {repeating,missing};
}
int main(){
    vector<int>arr={1,1,2,4,5};
    int n=arr.size();
    vector<int>ans=findMissRepeat(arr,n);
    cout<<ans[0];
    cout<<ans[1];
    return 0;
}

//Time Complexity: O(N2)
//Space Complexity :O(1)