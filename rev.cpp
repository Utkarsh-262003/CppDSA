#include<iostream>
using namespace std;
int reverseNumber(int n){
  int ans=0,rem;
  while(n){
    rem=n%10;
    ans=ans*10 + rem;
    n/=10;
  }
}
int main(){
  int n;
  cin>>n;
  cout<<"reverse is :"<<reverseNumber(n);
}