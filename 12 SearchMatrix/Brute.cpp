#include <bits/stdc++.h>
using namespace std;

bool checkNumber(vector<vector<int>>&matrix,int target){
    int n=matrix.size();
    int m=matrix[0].size();
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    vector<vector<int>>matrix={{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    checkNumber(matrix, 21) == true ? cout << "True\n" : cout << "False\n";
    return 0;
}