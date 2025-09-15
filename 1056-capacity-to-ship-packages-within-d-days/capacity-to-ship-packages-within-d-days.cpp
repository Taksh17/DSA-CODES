class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int s = *std::max_element(weights.begin(), weights.end());
int n = weights.size();
int e = std::accumulate(weights.begin(), weights.end(), 0);
int ans = e;
int m=s+(e-s)/2;
while(s<=e){
    int reqdays=1;
    int sum=0;
    for(auto x:weights){
        if(sum+x>m){
            reqdays++;
            sum=0;
        }
        sum+=x;
    }
        if(reqdays<=days){
            ans=m;
            e=m-1;
        }
        else{
            s=m+1;
        }
    m=s+(e-s)/2;
}
return ans;
        
    }
};