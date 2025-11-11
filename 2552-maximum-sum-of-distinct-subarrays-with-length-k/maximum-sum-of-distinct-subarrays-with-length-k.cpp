class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int l=0;
        long long sum=0;
        long long ans=0;
        unordered_map<int,int>mp;
        for(int r=0;r<nums.size();r++){
            mp[nums[r]]++;
            sum+=nums[r];
            while(r-l+1>k){
                mp[nums[l]]--;
                sum-=nums[l];
                if(mp[nums[l]]==0){
                    mp.erase(nums[l]);
                }
                l++;
            }
            if(r-l+1==k and mp.size()==k){
                ans=max(ans,sum);
            }
        }
        
        return ans;
    }
};