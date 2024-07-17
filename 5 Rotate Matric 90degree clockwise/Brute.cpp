#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> rotateMatrix(vector<vector<int>> &matrix,int n,int m){
    vector < vector < int >> rotated(n,vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
        rotated[j][n - i - 1] = matrix[i][j];
        }
    }
    return rotated;
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