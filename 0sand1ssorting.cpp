#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,1,0};
    int size=4;
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
count++;
        }
    }
    //number of ones
    int oneval=size-count;
    for(int i=0;i<count;i++){
        arr[i]=0;
    }
    for(int i=count;i<size;i++){
        arr[i]=1;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}