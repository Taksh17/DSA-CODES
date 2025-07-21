#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>brr;
    int arr[6]={0,1,1,0,0,1};
    int n=6;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            brr.push_back(1);
        }
        else if(arr[i]==1){
            brr.push_back(0);
        }
    }
    for(int i=0;i<n;i++){
        cout<<brr[i];
    }
}