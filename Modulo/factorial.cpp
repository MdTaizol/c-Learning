#include<bits/stdc++.h>
using namespace std;
int faact(int n){
    int fact = 1;
    int m = 47;
    for(int i = 1; i<=n;++i){
        fact= (fact*i)%m;
    }
    return fact;
}
int main(){
    int n;
    cin>>n;
   cout<< faact(n);
  

}