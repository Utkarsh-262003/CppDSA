void InsertionSort(int arr[],int n){
  for(int i=1;i<n;i++){
    for(int j=i;j>0;j--){
      if(arr[j]<arr[j-1])
      swap(arr[j],arr[j-1])
      else
      break;
    }
  }
}


void RevDes(int arr[], int n) {
    for (int i =n-2; i >= 0; i--) { 
        for (int j=i;j<n-1; j++) {
            if (arr[j] < arr[j+1]) {  // Descending: move larger forward
                swap(arr[j], arr[j + 1]);
            } else {
                break;
            }
        }
    }
}

