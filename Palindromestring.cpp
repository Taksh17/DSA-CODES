#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char ch[100];
    cin>>ch;
    int len=strlen(ch);
    int i=0;
    int j=len-1;
    while(i<j){
        if(ch[i]==ch[j]){
            i++;
            j--;
        }
        else{
            break;
            cout<<"Not palindrome";
        }
    }
    cout<<"Palindrome";
}