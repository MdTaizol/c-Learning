
#include<bits/stdc++.h>
using namespace std;
//Two value digit sum using function:

// int digit_sum( int n){
//       int sum=0;
//       for(int i =0 ; n>0; i=+1){
//        sum = sum + n%10;
//        n=n/10;
//     }
//     return sum;
// }
// int main (){
//     int a,b;
//     cin>>a>>b;
//     cout<<digit_sum(a)+digit_sum (b);
//     return 0;
// }

// pass by references:
// void increment(int &n,int &m ){
//     n++;
//     m++;
// }


// int main (){
// int a = 3;
// int b = 4;
// cout<< a << " "<<b<<endl;
// increment(a,b);
// cout<< b <<" "<<a<<endl;
// }

//swap to value:

// void swap(int &a ,int &b){
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int main(){
//  int a,b;
//  cin>>a>>b;
//  int r = max(a,b);
//  cout<<r<<endl;
//  //r=min(a,b);
//  cout<<r;
// }

// void func(string &s){
//      s = " ";
// }
// int main(){
//     string s = "asfag";
//     cout<< s<<endl;
//     func(s);
//     // cout<<s <<endl;
// }

//array always pass not user references in the function :
// void func(int a[]){
//     a[0]=5;
// }
// int main (){
//     int a[10];
//    a[0]=7;
//    cout<<a[0]<<endl;
//    func(a);
//    cout<<a[0];
// }


// //2D array using in function :
// const int n = 1e5+10;
// int a[n][n];
// void func(){
//     a[0][1]= 5;

// }
// int main(){
//     func();
//     cout<<a[0][1];
// }
 