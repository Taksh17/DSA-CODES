class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>count(26,0);
        int maxcount=0;
        int l=0;
        int res=0;
        for(int r=0;r<s.size();r++){
            count[s[r]-'A']++;
            maxcount=max(maxcount,count[s[r]-'A']);
        while((r-l+1)-maxcount>k){
            count[s[l]-'A']--;
            l++;
        }
        res=max(res,r-l+1);
        }
        return res;
    
        
    }
};