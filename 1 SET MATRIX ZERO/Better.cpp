#include<bits/stdc++.h>
using namespace std;


vector<vector<int>>setmatrix(vector<vector<int>>&matrix,int n,int m){
    int row[n]={0};//row array
    int col[m]={0};//col array

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                // mark ith index of row wih 1:
                row[i]=1;

                // mark jth index of col wih 1:
                col[j]=1;
            }
        }
    }
    

    // Finally, mark all (i, j) as 0
    // if row[i] or col[j] is marked with 1.
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i]==1 ||col[j]==1){
                matrix[i][j]=0;
            }
        }
    }
    return matrix;
}
int main(){
    vector<vector<int>> matrix={{1,1,1},{1,1,1},{1,0,1}};
    int n=matrix.size();
    int m=matrix[0].size();

    vector<vector<int>> ans=setmatrix(matrix,n,m);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}


//Time complxity O(2*(m*n))
//space complexity O(m)+O(n)