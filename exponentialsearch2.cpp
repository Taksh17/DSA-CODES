#include<iostream>
#include<algorithm>
using namespace std;
int binarysearch(int arr[],int n,int s,int e,int target){
    int m=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[m]==target){
            return m;
        }
        else if(arr[m]>target){
            e=m-1;
        }
        else{
            s=m+1;
        }
        m=s+(e-s)/2;
    }
    return -1;
}
int exposearch(int arr[],int n,int target){
    if(arr[0]==target){
        return 0;
    }
    int i=1;
    while(i<n and arr[i]<target){
        i*=2;
    }
    return binarysearch(arr,n,i/2,min(i, n - 1),target);
}
int main(){
    int arr[7]={3,4,5,6,7,10,23};
    int n=7;
    int target=7;
    int ans=exposearch(arr,7,7);
    cout<<ans;


}