#include<iostream>
using namespace std;
int findElement(int arr[],int size,int target){
  int index=-1;
  for(int i=0;i<size;i++){
    if(arr[i]==target){
      index=i;
    }
    return index;
  }
}
int main(){
  int arr[100];
  int size=10;
  int X;
  //Input
  cout<<findElement(arr,size,X);
}