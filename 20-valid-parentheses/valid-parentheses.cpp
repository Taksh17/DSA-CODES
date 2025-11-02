class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char>st;
        for(int i=0;i<n;i++){
         char ch=s[i];
         if(ch=='(' or ch=='{' or ch=='['){
         st.push(ch);
         }
         else{
            if(!st.empty() and st.top()=='(' and ch==')'){
                st.pop();
            }
            else if(!st.empty() and st.top()=='{' and ch=='}'){
                st.pop();
            }
            else if(!st.empty() and st.top()=='[' and ch==']'){
             st.pop();
            }
            else{
            return false;
            }
            }
        }
        if(st.size()==0){
            return true;
        }
        else{
            return false;
        }
        
    }
};