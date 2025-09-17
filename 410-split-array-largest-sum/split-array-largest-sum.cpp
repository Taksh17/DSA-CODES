class Solution {
public:
bool cansplit(vector<int>& nums, int k, long long mid){
    long long sum=0;
    int count=1;
    for(int num:nums){
        if (sum + num > mid) {
            count++; 
            sum = num;
        } else {
            sum += num;
        }
    }
    return count <= k;
    }
    int splitArray(vector<int>& nums, int k) {
        long long left = *max_element(nums.begin(), nums.end());
long long right = accumulate(nums.begin(), nums.end(), 0LL);
long long m=left+(right-left)/2;
long long answer=right;
while(left<=right){
    if(cansplit(nums,k,m)){
        answer=m;
        right=m-1;
    }
    else{
        left=m+1;
    }
    m=left+(right-left)/2;
}
return answer;
        
    }
};