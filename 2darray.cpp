#include<iostream>
using namespace std;
void printcol(int arr[][4]){
    for(int j=0;j<4;j++){
      for(int i=0;i<3;i++){
        cout<<arr[i][j] <<" ";
      }
    }
}
bool linearsearch(int arr[][4],int row,int col,int target){
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      if(arr[i][j]==target){
       return true;

      }
    }
   
   

  }
   return false;
}
int main(){
  int arr[3][4];
  int num=1;
  for(int i=0;i<3;i++){
      for(int j=0;j<4;j++){
        arr[i][j]=num;
        num++;
      }
  }

  //to print all values
  for(int i=0;i<3;i++){
      for(int j=0;j<4;j++){
        cout<<arr[i][j] <<" ";
        
      }
  }

  //print via function column wise
  printcol(arr);

  //find an element in our array
  int rows=3,col=4;
  int X=7;//target
  cout<< linearsearch(arr,rows, col, X);

  
}