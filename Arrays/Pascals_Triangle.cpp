#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generate(int numRows){
    vector<vector<int>> matrix(numRows, vector<int>(numRows));

    for(int i = 0; i < numRows; i++){
        matrix[i][0] = 1;

        for(int j = 0; j < numRows; j++){
            if(i > 0 && j > 0){
                matrix[i][j] = matrix[i-1][j-1] + matrix[i-1][j];
            }
        }

        matrix[i].resize(i + 1);
    }
    return matrix;
}

int main()
{
    int n;
    cout<<"Enter a numbe to form a pascal's triangle : \n";
    cin>>n;

    vector<vector<int>> pascals_triangle(n);

    pascals_triangle = generate(n);
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<pascals_triangle[i][j]<<" ";
        }
        
    }
    return 0;
}