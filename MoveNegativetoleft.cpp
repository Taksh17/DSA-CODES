#include<iostream>
using namespace std;
int main(){
    int arr[5]={4,3,-1,-2,-3};
    int n=5;
    int l=0;
    int h=n-1;
    while(l<=h){
        if(arr[l]<0 and arr[h]<0){
            l++;
        }
        else if(arr[l]>0 and arr[h]<0){
             swap(arr[l],arr[h]);
             l++;
             h--;
        }
        else if(arr[l]<0 and arr[h]>0){
            h--;
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
}