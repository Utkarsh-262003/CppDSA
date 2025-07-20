void SelectionSort(int arr[],int n){
  for(int i=n;i>1;i++){
    int index=i;
    for(int j=i-1;j>0;j++){
      if(arr[index]<arr[j]){
        index=j;
      }
    }
    swap(arr[index],arr[i]);
  }
}