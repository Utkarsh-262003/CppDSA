int maxsumindex(int arr[][col],int row,int col){
  int max_sum=INT_MIN;
  int   index=-1;
  for(int i=0;i<row;i++){
    int total=0;
    for(int j=0;j<col;j++){
      total+=arr[i][j];
     
    }
     if(total>=max_sum){
        max_sum=total;
        index=i;
      }
  }
  return index;
}