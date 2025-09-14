#include<iostream>
#include<climits>
using namespace std;
void mininarr(int arr[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
      if(arr[i]<min){
        min = arr[i];
      }
    }
    cout<< min;
}
void maxinarr(int arr[],int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++){
      if(arr[i]>max){
        max = arr[i];
      }
    }
    cout<< max;
}

int main(){
  int arr[100];
  int size=100;
  //Driver Code
  mininarr(arr,size);
  return 0;
}