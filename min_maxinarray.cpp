#include<iostream>
#include<climits>
using namespace std;
// int maxinarr1(int arr[],int size){
//   int max=INT_MIN;
//   for(int i=0;i<size;i++){
//     if(arr[i]>max){
//       max=arr[i];
//     }
//   }
//   return max;

// }
// int maxinarr2(int arr[],int size){
//   int max=arr[0];
//   for(int i=1;i<size;i++){
//     if(arr[i]>max){
//       max=arr[i];
//     }
//   }
//   return max;

// }
// int mininarr1(int arr[],int size){
//   int min=arr[0];
//   for(int i=1;i<size;i++){
//     if(arr[i]<min){
//       min=arr[i];
//     }
//   }
//   return min;

// }
int mininarr2(int arr[],int size){
  int min=INT_MAX;
  for(int i=0;i<size;i++){
    if(arr[i]<min){
      min=arr[i];
    }
  }
  return min;

}

int main(){
  int arr[100],size;
  cout<< "Enter size of array : ";
  cin>> size;
  cout<<"Enter elements of array :";
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
    // int max1=maxinarr1(arr,size);
    // int max2=maxinarr2(arr,size);
    // int min1=mininarr1(arr,size);
     int min2=mininarr2(arr,size);
    cout<<"Min Element is :"<<min2<<endl;
}