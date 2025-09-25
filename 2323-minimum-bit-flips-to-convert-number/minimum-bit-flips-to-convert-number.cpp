class Solution {
public:
    int minBitFlips(int start, int goal) {
        vector<int>st;
        vector<int>gt;
       while(start>0){
        int st1=start%2;
        st.push_back(st1);
        start=start/2;
       }
        while(goal>0){
        int gt1=goal%2;
        gt.push_back(gt1);
        goal=goal/2;
       }
       std::reverse(st.begin(), st.end());
       std::reverse(gt.begin(), gt.end());
      int maxi=max(st.size(),gt.size());
      while(st.size()<maxi){
        st.insert(st.begin(),0);
      }
      while(gt.size()<maxi){
        gt.insert(gt.begin(),0);
      }
      int count=0;
      for(int i=0;i<st.size();i++){
        if(st[i]!=gt[i]){
            count++;
        }
        else{
            continue;
        }
      }
      return count;
        
        
    }
};