#include<iostream>
using namespace std;
int trailingZeroes(int number){
  int ans=0;
  while(number >=5){
      ans += number /5;
      number/=5;
  }
  return ans;
}
int main(){
  int num;
  cin >> num;
 cout<< trailingZeroes(num);
}