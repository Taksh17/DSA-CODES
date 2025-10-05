class Solution {
public:
int atmost(vector<int>& nums, int k){
    int left=0;
    int countodd=0;
    int res=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]%2){
            countodd++;
        }
            while(countodd>k){
                if(nums[left]%2){
                    countodd--;
                }
                left++;
            }
            res+=(i-left+1);
    }
    return res;

}
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums, k) - atmost(nums, k - 1);
        
    }
};