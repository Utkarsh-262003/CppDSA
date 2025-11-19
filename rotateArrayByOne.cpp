void rotateArrayByOne(int arr[],int size){
  //ClockWise
  int temp= arr[size-1];
  for(int i=size-2;i>=0;i--){
    arr[i+1]=arr[i];
  }
  arr[0]=temp;
}