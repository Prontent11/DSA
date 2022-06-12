//Code studio
void rotateLayer(int rs, int cs, int re, int ce, vector<vector<int>> &mat){
    int tmp = mat[rs][cs];
    for(int i=rs; i<re; i++){
         mat[i][cs] = mat[i+1][cs];
    }
    for(int j=cs; j<ce; j++){
         mat[re][j] = mat[re][j+1];
    }
    for(int i=re; i>rs; i--){
         mat[i][ce] = mat[i-1][ce];
    }
    //               note below cs+1 
    for(int j=ce; j>cs+1; j--){
         mat[rs][j] = mat[rs][j-1];
    }
    mat[rs][cs+1] = tmp;
}

void rotateMatrix(vector<vector<int>> &mat, int n, int m){
    int rs=0, cs=0, re=n-1, ce=m-1;
    
    while(rs<re and cs<ce){
        rotateLayer(rs, cs, re, ce, mat);
        rs++;
        re--;
        cs++;
        ce--;
    }
}

// LeetCode

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
 
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      swap(matrix[i][j], matrix[j][i]);
    }
  }
  for (int i = 0; i < n; i++) {
    reverse(matrix[i].begin(), matrix[i].end());
  }
    }
};