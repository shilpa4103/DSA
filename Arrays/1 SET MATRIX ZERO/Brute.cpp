#include<bits/stdc++.h>
using namespace std;

void markRow(vector<vector<int>> &matrix,int n,int m,int i){
    // set all non-zero elements as -1 in the row i:
    for(int j=0;j<m;j++){
        if(matrix[i][j]!=0){
            matrix[i][j]=-1;
        }
    }
}

void markCol(vector<vector<int>> &matrix,int n,int m,int j){
    // set all non-zero elements as -1 in the col j:
    for(int i=0;i<n;i++){
        if(matrix[i][j]!=0){
            matrix[i][j]=-1;
        }
    }
}


vector<vector<int>>zeromatrix(vector<vector<int>> &matrix,int n,int m){

    // Set -1 for rows and cols
    // that contains 0. Don't mark any 0 as -1:
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                markRow(matrix,n,m,i);
                markCol(matrix,n,m,j);
            }
        }
    }
     
    // Finally, mark all -1 as 0: 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==-1){
                matrix[i][j]=0;
            }
        }
    }

    //return matrix
    return matrix;
}
int main(){
    //initialising matrix
    vector<vector<int>>matrix={{1,1,1},{1,0,1},{1,1,1}};

    //finding the length
    int n=matrix.size();
    int m=matrix[0].size();

    //calling function
    vector<vector<int>>ans=zeromatrix(matrix,n,m);


    //print the output
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}

//Time complexity = O((N*M)*(N + M)) + O(N*M)
//space complexity = O(1)