#include<bits/stdc++.h>
using namespace std;
int main(){
 char day;
  cin>>day;
  switch(day){
    case 'a':
    cout<<"Monday";
    break;
    case 'b':
    cout<<"Tuesday";
    break;
    case 'c':
    cout<<"wednesday";
    break;
    case 'd':
    cout<<"Thusday";
    break;
    default:
    cout<<"Its a break day";
    break;
  }
    return 0;
}