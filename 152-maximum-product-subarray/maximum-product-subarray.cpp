class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=nums[0];
        int mini=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            int oldmaxi=maxi;
            int oldmini=mini;
            maxi=max(nums[i],max(oldmaxi*nums[i],oldmini*nums[i]));
            mini=min(nums[i],min(oldmaxi*nums[i],oldmini*nums[i]));
             ans=max(maxi,ans);
        }
        return ans;
    }
};