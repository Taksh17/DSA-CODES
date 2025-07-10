#include<iostream>
#include <unordered_map>
using namespace std;
int main(){
    int arr[4]={10,20,30,40};
    int target=60;
    unordered_map<int,int>mp;
    for(int i=0;i<4;i++){
        int compliment=target-arr[i];
        if(mp.find(compliment)!=mp.end()){
            cout<< mp[compliment]<<" ";
            cout<<i;
            return 0;
        }
        mp[arr[i]]=i;
    }
    cout<<"no pair found";
}