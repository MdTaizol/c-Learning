#include<bits/stdc++.h>
using namespace std;
int main(){
    //it's not a some of digit;
    //  string s;
    //  cin>>s;
    //  int w = s.length();
    //  cout<<(int)s[w-1];
    
int t;
cin>>t;
while(t--){
    int x ;
    cin>>x;
    int sum = 0;
    while(x>0){
    int last_digit= x % 10;
      sum += last_digit;
      x = x /10;
    cout<< sum <<endl;
}
    
}