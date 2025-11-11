class Solution {
public:
 bool isvowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    int countOfSubstrings(string word, int k) {
           int n=word.size();
        long long ans=0;
        for(int i=0;i<n;i++){
            unordered_map<char,int>vow;
            int cons=0;
            for(int j=i;j<n;j++){
                if(isvowel(word[j])) vow[word[j]]++;
                else cons++;
                if(cons>k) break;
                if(vow.size()==5 && cons==k) ans++;
            }
        }
        return ans;
        
    }
};