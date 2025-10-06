class Solution {
public:
int atmost(vector<int>& nums, int k){
    int left=0;
    unordered_map<int,int>freq;
    int res=0;
    for(int i=0;i<nums.size();i++){
        if(freq[nums[i]]==0) k--;
        freq[nums[i]]++;
        while(k<0){
            freq[nums[left]]--;
             if (freq[nums[left]] == 0)
                k++;
                left++;
        }
        res+=i-left+1;
    }
    return res;

}
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
        
    }
};