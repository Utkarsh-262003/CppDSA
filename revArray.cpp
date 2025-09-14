void swap(int a, int b){
  a=a+b;
  b=a-b;
  a=a-b;
  // Xor decreses readability
}
void revArray(int arr[],int size){
 int i=0,j=size-1;
    while(i<j){
      swap(&arr[i],&arr[j]);
      i++;
j--;
    }
}