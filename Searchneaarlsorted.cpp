#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int target ){
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;
    while(s<=e){
        if(arr[m]==target){
            return m;
        }
        if(arr[m-1]==target){
            return m-1;
        }
        if(arr[m+1]==target){
            return m+1;
        }
        else if(arr[m]>target){
            e=m-2;
        }
        else{
            s=m+2;
        }
        m=s+(e-s)/2;
    }
    return -1;
}
int main(){
    int arr[7]={10,3,40,20,50,80,70};
    int n=7;
    int target=40;
    int ans=binarysearch(arr,n,target);
    cout<<ans;
}