#include<iostream>
using namespace std;
int main(){
    int arr[4]={0,10,5,2};
    int n=4;
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;
    while(s<e){
        if(arr[m]<arr[m+1]){
            //line a par hai
            s=m+1;
        }
        else{
            e=m;
        }
        m=s+(e-s)/2;
    }
    cout<<arr[m];
}