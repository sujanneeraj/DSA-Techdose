class Solution {
public:
    
    vector<vector<int>> pascalTriangle(int N) {


   vector<vector<int>> matrix(N, vector<int>(N));
   
   vector<vector<int>> result;
        
   matrix[0][0] = 1;
   result.push_back({matrix[0][0]});

   for(int i = 1; i < matrix.size(); i++) {
       matrix[i][0] = 1;
       matrix[i][i] = 1;
       vector<int> temp;
       temp.push_back(matrix[i][0]);
       for(int j = 1; j < i; j++) {
           matrix[i][j] = matrix[i-1][j-1] + matrix[i-1][j];
           temp.push_back(matrix[i][j]);
           
       }
       temp.push_back(matrix[i][i]);
       result.push_back(temp);
    
   }

  // display(matrix);
  return result;

   
}
    
    
    vector<vector<int>> generate(int numRows) {
        
        return pascalTriangle(numRows);
        
    }
};