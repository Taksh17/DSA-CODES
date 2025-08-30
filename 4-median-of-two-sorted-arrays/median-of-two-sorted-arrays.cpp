class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int>result;
        int i=0;
        int j=0;
        while(i<n1 and j<n2){
            if(nums1[i]<=nums2[j]){
                result.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i]>nums2[j]){
                result.push_back(nums2[j]);
                j++;
            }
    
        }
          while (i < n1) {
        result.push_back(nums1[i]);
        i++;
    }
    while (j < n2) {
        result.push_back(nums2[j]);
        j++;
    }
   int len=result.size();
     if (len % 2 == 1) {
        return result[len/ 2]; 
    } else {
        return (result[len/ 2 - 1] + result[len / 2]) / 2.0; 
    }
        
    }
};