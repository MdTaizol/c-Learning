#include<bits/stdc++.h>
using namespace std;
// when we decarle the vriable on the int main function it's called gobal variable it's use any where;
//int x;
int main(){

    // int a = 2;
    // int b = 3;
    // int c = 5;
    // cout<< (a == b)<<endl;
    // cout<< ( a<=b) && (a<=c);
    // cout<<endl;
    //  cout<<( b<= a) || (b<=c);


    int n;
    cin>>n;
    if(n % 2 == 0){
        cout<< "Its even"<< endl;
    }
    else if ( n % 3 == 0){
        cout<< " It's Disivile by three"<<endl;
    }
    else{
   cout << " Not even number"<<endl;
    }
    
}