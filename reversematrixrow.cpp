void reverseMatrixRow(int arr[][4],int row,int col){
  for(int i=0;i<row;i++){
    int start=0,end=(col-1);
    int j=0;
    while(start<end){
      swap(arr[i][start],arr[i][end]);
      start++;
      end--;
    }
  }
}