class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int l=0;
        int maxlen=0;
        for(int r=0;r<s.size();r++){
            char ch=s[r];
            if(mp.find(ch)!=mp.end() and mp[ch]>=l){
                l=mp[ch]+1;
            }
            mp[ch]=r;
            maxlen=max(maxlen,r-l+1);
        }
        return maxlen;
        
    }
};