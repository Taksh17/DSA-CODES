#include<iostream>
#include<string>
#include<cstring>
using namespace std;
bool palindrome(string &ch,int s,int e){
    while(s<=e){
        if(ch[s]!=ch[e]){
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}
int main(){
    string ch;
    cin>>ch;
    int i=0;
    int j=ch.length()-1;
    while(i<=j){
        if(ch[i]==ch[j]){
            i++;
            j--;
        }
        else{
            bool oneans=palindrome(ch,i+1,j);
            bool twoans=palindrome(ch,i,j-1);
            bool ans=oneans || twoans;
            cout<<ans;
            return 0;
        }
    }
    cout<<"Palindrome";
    return 0;
}