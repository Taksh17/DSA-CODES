class Solution {
public:
    string convert(string s, int numRows) {
            if(numRows == 1) return s;
    vector<string> zigzag(numRows);
    int i = 0;
    int row = 0;
    bool direction = 1; // 1 = down, 0 = up

    while(true) {
        if(direction) { // going down
            while(row < numRows && i < s.size()) {
                zigzag[row].push_back(s[i++]);
                row++;
            }
            row = numRows - 2;
        } else { // going up
            while(row >= 0 && i < s.size()) {
                zigzag[row--].push_back(s[i++]);
            }
            row = 1;
        }
        if(i >= s.size()) break;
        direction = !direction; // ✅ FIXED
    }

    string ans = "";
    for(int i = 0; i < zigzag.size(); i++) {
        ans += zigzag[i];
    }
    return ans;
        
    }
};