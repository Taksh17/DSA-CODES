#include<iostream>
#include<algorithm>
using namespace std;
bool issoltuion(int arr[],int k,int m){
    int wood=0;
    for(int i=0;i<4;i++){
        if(arr[i]>m){
            wood+=arr[i]-m; 
        }
    }
    return wood>=k;
}
int main(){
    int arr[4]={20,15,10,17};
    int n=4;
    sort(arr,arr+n);
    int s=0;
    int e=arr[n-1];
    int k=7;
    int ans=-1;
    while(s<=e){
        int m=s+(e-s)/2;
        if(issoltuion(arr,k,m)){
            ans=m;
            s=m+1;
        }
        else{
            e=m-1;
        }
    }
    cout<<ans;
}