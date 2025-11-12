class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
       for(int i=0;i<s.size();i++){
        char ct=s[i];
     if(!st.empty() and st.top()==ct){
            st.pop();
        }
        else{
            st.push(ct);
        }
       }
       string ans="";
      while(!st.empty()){
        ans+=st.top();
        st.pop();
      }
      reverse(ans.begin(),ans.end());
      return ans;
    }
};