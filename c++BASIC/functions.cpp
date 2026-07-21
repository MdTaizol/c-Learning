#include<bits/stdc++.h>
using namespace std;
// // void -> which does not returns anything:

// void PrintName(){
//     cout<<"MTIS";

// }
// int main(){
//     PrintName();
//     return 0;
// }


//voide function using parameters:
// void PrintName(string name){
//     cout<<"hey"<< " "<<name<<endl;
// }
// int main(){
//     string name;
//     cin>> name;
//     PrintName(name);

//     string name1;
//     cin>>name1;
//     PrintName(name1);
//     return 0;
// }

//take two number and print its sum using function and it's use any variable :
//   int sum (int n, int m ){
//     int result = n + m;
//     return result;
//   }
// int main(){
//     int n,m;
//     cin>>n>>m;
//     cout<<sum(n,m);
//     return 0;

// }

// sum code use void function :

// void sum (  int n,  int m){
//     int re = n+ m;
//     cout<< re;
// }
// int main (){
//     int n, m;
//     cin>>n>>m;
//     sum(n,m);
//     return 0;
// }

// //find out the max number;

// int maxx( int a, int b){
//     if( a >= b)
//     return a;
//     else
//     return b;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int res = maxx(a,b);
//     cout<<res;
//     return 0;
// }

// //pass by value:

// void dosomething( int num){
//     cout<<num<<endl;
//     num +=5;
//     cout<<num<<endl;
//     num +=10;
//     cout<<num<<endl;

// }
// int main (){
//     int num = 10;
//     dosomething(num);
//     cout<<num;  // it's going to the copy not exit vlaue:
//     return 0;
// }

//Pass by reference use this -> & :
// void mai (string &s){
//     s [0]='x';
//     cout<<s<<endl;
// }
// int main (){
//     string s;
//     cin>>s;
//     mai(s);
//     cout<< s;

// }

// function with array :

void some(int arr[],int n){
    arr[0] += 100;
    cout<<" Value inside function " <<arr[0]<<endl;
}
int main (){
    int n  ;
    cin>>n;
    int arr[n];
    for( int i = 0 ; i<n; i+=1){
        cin>>arr[i];
    }
    // for( int i =0 ; i<n; i +=1){
    //     cout<<arr[i];
    // }
    some(arr,n);
    cout<<" Value inside function " <<arr[0]<<endl;
}