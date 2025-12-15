void bubbleSort(vector<int> &arr){
  int n=arr.size();
  for(int i=n-2;i>=0;i--){
    bool flag=0;
    for(int j=0;j<=i;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
        flag =1;
      }
    }
    if(!flag) return;
  }
}