class Solution {
public:
    int maximum69Number (int num) {
        int ans=num;
        int n=num;
        int place=1;
        while(n>0){
            int digit=n%10;
            if(digit==6){
                ans=max(ans,num+3*place);
            }
             n /= 10;
        place *= 10;
        }
        return ans;
        
    }
};