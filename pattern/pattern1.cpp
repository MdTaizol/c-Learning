#include<bits/stdc++.h>
using namespace std;

void printlns(int n, int m){
    for(int i = 0; i< n; i++){
        for(int j = 0 ; j< m ; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}
int main(){
    int t; 
    cin>>t;
    while(t--){  
        int n,m;
        cin>>n>>m;
        printlns(n,m);
    }
}
 
//  *  *  *  *  * 
//  *  *  *  *  * 
//  *  *  *  *  * 
//  *  *  *  *  * 