void BubbleSort(int arr[],int n){
  for(int i=n-1;i>0;i--){
    bool swapped=0;
    for(int j=0;j<i;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
        swapped=1;
      }
    }
    if(swapped==0){
      break;
    }
  }
}



void Bubble(int arr[],int n){
  for(int i=n-2;i>=0;i--){
    bool swapped=0;
    for(int j=0;j<i;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
        swapped=1;
      }
    }
    if(swapped==0) break;
  }
}

void Idea3(int arr[],int n){
  for(int i=0;i<n-1){
    bool swapped=0;
    for(int j=n-1;j>i;j--){
      if(arr[j]<arr[j-1]){
        swap(arr[j],arr[j-1]);
        swapped=1;
      }
    }
    (swapped ==0) break;
  }
}