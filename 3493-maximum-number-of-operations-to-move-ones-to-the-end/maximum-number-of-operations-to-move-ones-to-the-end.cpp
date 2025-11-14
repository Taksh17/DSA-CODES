class Solution {
public:
    int maxOperations(string s) {
         int onesCount = 0, operations = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '1') 
                onesCount++;
            else if (i > 0 && s[i - 1] == '1') 
                operations += onesCount;
        }
        return operations;

        
    }
};