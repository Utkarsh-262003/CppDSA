#include<iostream>
using namespace std;
void stC(char ch){
  char ans = ch -'a' +'A';
  cout<<ans;
}
int main(){
  char ch;
  cout<<"Enter your Character :";
  cin>>ch;
  stC(ch);
}