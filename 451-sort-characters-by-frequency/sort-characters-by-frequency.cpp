class Solution {
public:
    string frequencySort(string s) {
         unordered_map<char,int> mp;
        for (char c : s) {
            mp[c]++;
        }
        vector<pair<char,int>> freq;
        for (auto it : mp) {
            freq.push_back({it.first, it.second});
        }
        sort(freq.begin(), freq.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });
        string ans = "";
        for (auto it : freq) {
            for (int i = 0; i < it.second; i++) {
                ans.push_back(it.first);
            }
        }

        return ans;
        
    }
};