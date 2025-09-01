class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int longest=1;
        int countcurr=0;
        int lastmin=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]-1==lastmin){
                countcurr++;
                lastmin=nums[i];
            }
            else if(nums[i]==lastmin){
                continue;
            }
            else{
                lastmin=nums[i];
                countcurr=1;
            }
            longest=max(longest,countcurr);
        }
        return longest;
        
    }
};