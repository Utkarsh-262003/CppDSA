#include<iostream>
using namespace std;
char convert(char input){
  char ans = input - 'a'+'A';
  return ans;
}
int main(){
  char input;
  cout<<"Enter input charecter";
  cin>> input;
 cout<< convert(input);
}