#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> rotateMatrix(vector<vector<int>> &matrix,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
             swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
    return matrix;
}
int main(){
    vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};
    int n=matrix.size();
    int m=matrix[0].size();
    vector<vector<int>>ans=rotateMatrix(matrix,n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}