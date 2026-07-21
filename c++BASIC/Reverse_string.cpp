#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        string str_rev;
        for(int i=0; i<str.size()-1;--i){
            //str_rev.push_back()its include the characters.
            str_rev.push_back(str[i]);
        }
       cout<<str_rev;
       if(str == str_rev){
        cout<<"Yes"<<endl;
       }else{
        cout<<"NO"<<endl;
       }
    }
}