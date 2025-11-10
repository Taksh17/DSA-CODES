class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
          int n = nums.size();
        long long ans = 0;
        stack<int> st;
        vector<int> nextGreater(n, n); 
        for(int i = 0; i < n; i++) {
            while(!st.empty() && nums[st.top()] < nums[i]) {
                nextGreater[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()) st.pop();
        vector<int> prevGreater(n, -1); 
        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && nums[st.top()] <= nums[i]) {
                prevGreater[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        for(int i = 0; i < n; i++) {
            long long left = i - prevGreater[i];    
            long long right = nextGreater[i] - i;     
            ans += (long long) nums[i] * left * right; 
        }
        while(!st.empty()) st.pop();
        vector<int> nextSmaller(n, n);
        for(int i = 0; i < n; i++) {
            while(!st.empty() && nums[st.top()] > nums[i]) {
                nextSmaller[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()) st.pop();
        vector<int> prevSmaller(n, -1);
        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && nums[st.top()] >= nums[i]) {
                prevSmaller[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        for(int i = 0; i < n; i++) {
            long long left = i - prevSmaller[i];
            long long right = nextSmaller[i] - i;
            ans -= (long long) nums[i] * left * right;
        }

        return ans;
        
    }
};