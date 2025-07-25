#include<iostream>
#include<limits>
#include<vector>
#include<math.h>
using namespace std;
bool cankokofinishbnananwithkspeed(vector<int>& piles,int h,int k){
    long long int totalhourstaken=0;
    for(int i=0;i<piles.size();i++){
        totalhourstaken+=ceil(piles[i]/(double)k);
    }
     if(totalhourstaken<=h){
            return true;
        }
        return false;
}
int main(){
     int piles[5]={30,11,23,4,20};
     int n=5;
     int s=1;
     int h=5;
     auto it = max_element(piles.begin(),piles.end());
     int e=*it;
     int m=s+(e-s)/2;
     int ans=1;
     while(s<=e){
        int k=m;
         if(cankokofinishbnananwithkspeed(piles,h,k)){
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

  