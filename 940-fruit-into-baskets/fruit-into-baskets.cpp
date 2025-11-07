class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>basket;
        int maxcount=0;
        int l=0;
        for(int r=0;r<fruits.size();r++){
            basket[fruits[r]]++;
            while(basket.size()>2){
                basket[fruits[l]]--;
                if(basket[fruits[l]]==0){
                    basket.erase(fruits[l]);
                }
                l++;
            }
            maxcount=max(maxcount,r-l+1);
        }
        return maxcount;
        
    }
};