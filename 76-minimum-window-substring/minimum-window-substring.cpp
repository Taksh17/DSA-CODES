class Solution {
public:
    string minWindow(string s, string t) {
         if (t.size() > s.size())
            return "";

        unordered_map<char, int> need;
        for (auto ch : t)
            need[ch]++;

        unordered_map<char, int> window;
        int have = 0;
        int needCount = need.size();
        int l = 0, start = 0;
        int minLen = INT_MAX;

        for (int r = 0; r < s.size(); r++) {
            char c = s[r];
            window[c]++;

            if (need.count(c) && window[c] == need[c])
                have++;
            while (have == needCount) {
                if (r - l + 1 < minLen) {
                    minLen = r - l + 1;
                    start = l;
                }

                window[s[l]]--;
                if (need.count(s[l]) && window[s[l]] < need[s[l]])
                    have--;
                l++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(start, minLen);
        
    }
};