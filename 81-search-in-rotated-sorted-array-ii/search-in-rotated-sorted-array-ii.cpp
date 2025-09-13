class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int m=s+(e-s)/2;
        while(s<=e){
            if(nums[m]==target){
                return true;
            }
            else if(nums[s]==nums[m] and nums[m]==nums[e]){
                s++;
                e--;
                continue;
            }
            else if(nums[s]<=nums[m]){
                if(nums[s]<=target and target<=nums[m]){
                    e=m-1;
                }
                else{
                    s=m+1;
                }
            }
            else if(nums[m]<=nums[e]){
                if(nums[m]<=target and target<=nums[e]){
                    s=m+1;;
                }
                else{
                e=m-1;
                }
            }
            m=s+(e-s)/2;
        }
        return false;
        
    }
};