void selectiontionSort(vector <int> arr){
  int n= arr.size()-1;
  for(int i=0;i<n;i++){
    int index=i;
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[index])  index=j;
    }
    swap(arr[i],arr[index]);
  }
}