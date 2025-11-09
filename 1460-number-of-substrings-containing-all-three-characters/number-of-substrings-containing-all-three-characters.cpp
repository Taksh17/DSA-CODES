class Solution {
public:
    int numberOfSubstrings(string s) {
        int l=0;
        int count=0;
        int n=s.size();
        unordered_map<int,int>mp;
        for(int r=0;r<s.size();r++){
            mp[s[r]]++;
            while(mp['a']>0 and mp['b']>0 and mp['c']>0){
                count+=(n-r);
                mp[s[l]]--;
                l++;
            }
        }
        return count;
        
    }
};