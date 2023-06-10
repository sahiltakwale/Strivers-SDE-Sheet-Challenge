//  Strivers SDE Sheet Challenge 2023
//  Arrays - 1. Set Matrix Zeroes;

#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix){
    bool first_row = false; bool first_col = false;
    int rows = matrix.size();
    int cols = matrix[0].size();

    for(int j = 0; j < cols; j++){
        if(matrix[0][j] == 0){
            first_row = true;
        }
    }    
    for(int i = 0; i < rows; i++){
        if(matrix[i][0] == 0){
            first_col = true;
        }
    }

    for(int i = 1; i < rows; i++){
        for(int j = 1; j < cols; j++){
            if(matrix[i][j] == 0){
                matrix[0][j] = matrix[i][0] = 0;
            }
        }
    }

    for(int i = 1; i < rows; i++){
        if(matrix[i][0] == 0){
            for(int j = 1; j < cols; j++){
                matrix[i][j] = 0;
            }
        }
    }
    for(int j = 1; j < cols; j++){
        if(matrix[0][j] == 0){
            for(int i = 1; i < rows; i++){
                matrix[i][j] = 0;
            }
        }
    }

    if(first_row){
        for(int j = 0; j < cols; j++){
            matrix[0][j] = 0;
        }
    }
    if(first_col){
        for(int i = 0; i < rows; i++){
            matrix[i][0] = 0;
        }
    }
}

int main()
{
    int m,n;
    cout<<"Enter the no. of rows in matrix : \n";
    cin>>m;
    cout<<"Enter the no. of cols in matrix : \n";
    cin>>n;

    vector<vector<int>> matrix(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>matrix[i][j];
        }
        
    }

    setZeroes(matrix);
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<matrix[i][j];
        }
        
    }
    return 0;
}