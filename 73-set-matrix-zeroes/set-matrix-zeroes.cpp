class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        vector<bool>zerorows(rows,false);
        vector<bool>zerocols(cols,false);
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==0){
                    zerorows[i]=true;
                    zerocols[j]=true;
                }
            }
        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(zerorows[i] || zerocols[j]){
                    matrix[i][j]=0;
                }
            }
        }

    }
};