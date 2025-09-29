class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int subset=1<<nums.size();
        vector<vector<int>>mylist;
        for(int i=0;i<subset;i++){
            vector<int>sus;
            for(int j=0;j<nums.size();j++){
                if(i &(1<<j)){
                    sus.push_back(nums[j]);
                }
            }
            mylist.push_back(sus);
        }
        return mylist;

        
    }
};