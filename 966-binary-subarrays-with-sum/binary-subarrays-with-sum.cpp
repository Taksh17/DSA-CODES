class Solution {
public:
int atmostgoal(vector<int>& nums, int goal){
if(goal<0){
            return 0;
        }
        int l=0;
        int sum=0;
        int res=0;
        for(int r=0;r<nums.size();r++){
            sum+=nums[r];
            while(sum>goal){
                sum-=nums[l++];
            }
            res+=(r-l+1);
  }
  return res;
}
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atmostgoal(nums, goal) - atmostgoal(nums, goal-1);
       
    }
};