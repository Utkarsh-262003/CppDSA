int fibo(int arr[],int size){
  arr[0]=0;
  arr[1]=1;
  for(int i=2;i<size;i++){
    arr[i]=arr[i-1]+arr[i-2];
  }
  return arr[size-1];
}