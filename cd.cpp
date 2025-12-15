#include<bits/stdc++.h>
using namespace std;
// int countDigit(int num){
//   int count=0;
//   while(num){
//     count++;
//     num/=10;
//   }
//   return num;
// }
int countDigit(int num){
  int count =log10(num)+1;
  return count;
}
int main(){
  int n;
  cout<<"Enter the number :"<<endl;
  cin>>n;
  int ans=countDigit(n);
  cout<<"no of digits in the number are :" <<ans; 

}