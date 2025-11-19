class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
          sort(nums.begin(), nums.end());
        int n = nums.size();
        
        int l = 0;
        int maxWindow = 1; // atleast 1 element is always balanced

        for (int r = 0; r < n; r++) {
            while (l < r && (long long)nums[r] > (long long)nums[l] * k) {
                l++;
            }
            maxWindow = max(maxWindow, r - l + 1);
        }
        return n - maxWindow;
    }
};