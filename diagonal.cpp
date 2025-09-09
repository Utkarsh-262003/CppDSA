vector<int> sumdiagonal(int arr[][4],int row,int col){
  //square matrix od 4*4
  vector <int> ans;
  int sum1=0,sum2=0;
  for(int i=0;i<row;i++){
    sum1+=arr[i][i];
  }
  int i=0,j=col-1;
  while(j>=0){
    sum2+=arr[i][j];
    i++;
    j--
  }

  
  ans.push_back(sum1);
  ans.push_back(sum2);
  return ans;
}