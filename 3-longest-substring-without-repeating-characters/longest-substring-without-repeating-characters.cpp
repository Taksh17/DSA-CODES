class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>mp;
        int l=0;
        int r=0;
        int maxlen=0;
        while(r<s.size()){
            while(mp.find(s[r])!=mp.end()){
                mp.erase(s[l]);
                l++;
            }
            mp.insert(s[r]);
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
        
    }
};