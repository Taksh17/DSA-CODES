class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int l=0;
        int h=n-1;
        int mid=l+(h-l)/2;
        while(l<=h){
            int maxrow=0;
            for(int i=1;i<m;i++){
                if(mat[i][mid]>mat[maxrow][mid]){
                    maxrow=i;
                }
            }
            int left=(mid>0)?mat[maxrow][mid-1] : INT_MIN;
            int right=(mid<n-1)?mat[maxrow][mid+1]:INT_MIN;
            if(mat[maxrow][mid]>left and mat[maxrow][mid]>right){
                return {maxrow,mid};
            }
            else if(mat[maxrow][mid]<left){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
            mid=l+(h-l)/2;
        }
        return {-1,-1};
        
    }
};