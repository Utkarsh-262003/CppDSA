#include<iostream>
using namespace std;
int addDigits(int num){
  int rem,ans=0;
  while(num){
    rem =num%10;
    ans += rem;
    num /=10;
  }
   return ans;
}
int main(){
  int number;
  cin>>number;
  cout<< addDigits(number);
}