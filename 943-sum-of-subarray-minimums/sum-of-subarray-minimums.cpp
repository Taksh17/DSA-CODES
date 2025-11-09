class Solution {
public:
vector<int>nextsmaller(vector<int>&arr){
    int n = arr.size();
    vector<int> ans(n, -1);
    stack<int> st;
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && arr[st.top()] >= arr[i]) {
            st.pop();
        }
        ans[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }
    return ans;
}
vector<int>prevsmaller(vector<int>&arr){
   int n = arr.size();
    vector<int> ans(n, -1);
    stack<int> st;
    for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[st.top()] > arr[i]) {
            st.pop();
        }
        ans[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }
    return ans;
}
    int sumSubarrayMins(vector<int>& arr) {
       int n = arr.size();
    auto next = nextsmaller(arr);
    auto prev = prevsmaller(arr);
    
    long long sum = 0;
    const int mod = 1e9+7;
    
    for (int i = 0; i < n; i++) {
        int nexti = (next[i] == -1) ? n : next[i];
        int previ = prev[i];
        
        long long left = i - previ;
        long long right = nexti - i;
        
        sum = (sum + (1LL * arr[i] * left % mod * right % mod)) % mod;
    }
    return sum;
    }
};