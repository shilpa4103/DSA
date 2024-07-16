#include<bits/stdc++.h>
using namespace std;


vector<vector<int>>setmatrix(vector<vector<int>> &matrix,int n,int m){
    int col0=1;
    // step 1: Traverse the matrix and
    // mark 1st row & col accordingly:
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                // mark i-th row:
                matrix[i][0]=0;
                // mark j-th column:
                if(j!=0)
                matrix[0][j]=0;
                else
                col0=0;

            }
        }
    }


    //Mark with 0 from (1,1) to (n-1, m-1):
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(matrix[i][j]!=0){
                if(matrix[i][0]==0||matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
    }

     //Finally mark the 1st col & then 1st row:
    if(matrix[0][0]==0){
        for(int j=0;j<m;j++){
            matrix[0][j]=0;
        }
    }
    if(col0==0){
        for(int i=0;i<n;i++){
            matrix[i][0]=0;
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

//Time complexity: O(2*(N*M))
//Space complexity:O(1)  