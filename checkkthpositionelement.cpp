#include<iostream>
using namespace std;
int main(){
    int arr[8]={1,2,3,5,2,1,4,6};
    int n=8;
    int k=3;
    int l=0;
    int r=k;
    bool found=false;
    while(r<n){
        if(arr[l]==arr[r]){
            found=true;
            break;
        }
            l++;
            r++;
}
if(found){
    cout<<"Yes";
}
else{
cout<<"No";
}
}