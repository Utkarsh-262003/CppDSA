#include<iostream>
using namespace std;
int countDigits( int number){
  int ans=0;
  while(number !=0){
    ans++;
    number /=10;

  }
  return ans;
}
int power(int base,int exp){
  int ans=1;
  for(int i=0;i<exp;i++){
    ans *=base;
  }
  return ans;

}
bool armstrong(int num , int digits){
  int copy = num, rem,ans=0;
  while(copy !=0){
    rem = copy%10;
    ans += power(rem,digits);
    copy /=10;

  }
  if(ans==num) return true;
  else  return false;
}

int main(){
  int number;
  cin>> number;
  int digits= countDigits(number);
  cout<<armstrong(number , digits);
}