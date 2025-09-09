class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> ans;
        vector<string> currentLine;
        int currentLineChars = 0;

        for (int i = 0; i < words.size(); i++) {
            string word = words[i];
            if (currentLineChars + currentLine.size() + word.size() > maxWidth) {
                int extraSpaces = maxWidth - currentLineChars;
                int gaps = max(1, (int)currentLine.size() - 1);
                int spaceBetween = extraSpaces / gaps;
                int remainder = extraSpaces % gaps;

                string line = "";
                for (int j = 0; j < currentLine.size(); j++) {
                    line += currentLine[j];
                    if (j < currentLine.size() - 1) {
                        line += string(spaceBetween, ' ');
                        if (remainder > 0) {
                            line += " ";
                            remainder--;
                        }
                    }
                }
                if (currentLine.size() == 1) {
                    line += string(maxWidth - (int)line.size(), ' ');
                }
                ans.push_back(line);
                currentLine.clear();
                currentLineChars = 0;
            }
            currentLine.push_back(word);
            currentLineChars += word.size();
        }

        string lastLine = "";
        for (int i = 0; i < currentLine.size(); i++) {
            lastLine += currentLine[i];
            if (i < currentLine.size() - 1) lastLine += " ";
        }
        lastLine += string(maxWidth - lastLine.size(), ' ');
        ans.push_back(lastLine);

        return ans;
        
    }
};