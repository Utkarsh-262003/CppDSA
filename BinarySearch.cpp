#include<iostream>
using namespace std;
int BinarySearch(int arr[],int size,int key){
  int start=0,end=size-1,mid;
  while(start<=end){
    mid=start+(end-start)/2;
    if(arr[mid]==key)  return mid;
    else if(arr[mid]>key)  end=mid-1;
    else start = mid+1;
  }
  return -1;
}
int main(){
  int arr[100],n,key;
  cout<<"Enter the number of elements in array :";
  cin>>n;
  cout<<"Enter elements of array :";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Enter Key :";
  cin>>key;
  cout<<"index :"<<BinarySearch(arr,n,key);

}