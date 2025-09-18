class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int r=mat.size();
        int c=mat[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                 bool isPeak = true;
                   if (i > 0 && mat[i][j] <= mat[i-1][j]) isPeak = false;
            if (i < r-1 && mat[i][j] <= mat[i+1][j]) isPeak = false;
            if (j > 0 && mat[i][j] <= mat[i][j-1]) isPeak = false;
            if (j < c-1 && mat[i][j] <= mat[i][j+1]) isPeak = false;
            if (isPeak) return {i, j};

            }
        }
        return {-1,-1};
        
    }
};