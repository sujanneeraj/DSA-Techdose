#include <iostream>
#include <vector>

using namespace std;



void display(vector<vector<int>>& mat) {
    for(int i = 0; i < mat.size(); i++) {
        for(int j = 0; j < mat.size(); j++) {
            std::cout << mat[i][j] << " ";
        }
        std::cout << "\n";
    }
}

vector<vector<int>> pascalTriangle() {

   int N = 20;

   vector<vector<int>> matrix(N, vector<int>(N));

   matrix[0][0] = 1;

   for(int i = 1; i < matrix.size(); i++) {
       matrix[i][0] = 1;
       matrix[i][i] = 1;
       for(int j = 1; j < i; j++) {
           matrix[i][j] = matrix[i-1][j-1] + matrix[i-1][j];
           
       }
    
   }

  // display(matrix);
  return matrix;

   
}

int main() {

int n = 4;
int r = 2; 
auto result = pascalTriangle();

std::cout << result[n][r];

return 0;

}