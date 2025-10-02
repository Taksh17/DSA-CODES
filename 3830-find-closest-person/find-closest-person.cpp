class Solution {
public:
    int findClosest(int x, int y, int z) {
          long long dist1 = llabs((long long)x - (long long)z);
        long long dist2 = llabs((long long)y - (long long)z);

        if (dist1 == dist2) {
            return 0;
        } else if (dist1 < dist2) {
            return 1;
        } else {
            return 2;
        }
        
    }
};