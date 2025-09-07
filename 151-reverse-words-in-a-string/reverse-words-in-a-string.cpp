class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int left = 0, right = n - 1;
        while (left <= right && s[left] == ' ') left++;
        while (right >= left && s[right] == ' ') right--;
        string word = "", result = "";
        while (left <= right) {
            char c = s[left];

            if (c != ' ') {
                word += c;  
            } else if (word.size() > 0) {
                if (result.size() == 0) result = word;
                else result = word + " " + result;
                word = "";
            }
            left++;
        }
        if (word.size() > 0) {
            if (result.size() == 0) result = word;
            else result = word + " " + result;
        }

        return result;
        
    }
};