class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int currentsum=arr[0];
        int maxsum=arr[0];
        for(int i=1;i<arr.size();i++){
            currentsum=max(arr[i],currentsum+arr[i]);
            maxsum=max(maxsum,currentsum);
        }
        return maxsum;
        
    }
};