#include<iostream>
using namespace std;
int main()
{
    int n=6;
    int arr[6]={1,2,3,2,7,3};
    int repeat=n;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                repeat=min(repeat,i);
                 break;
            }
        }
    }
    cout<<repeat;
}