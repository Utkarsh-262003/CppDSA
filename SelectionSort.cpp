// void SelectionSort(int arr[],int n){
//   for(int i=n;i>1;i++){
//     int index=i;
//     for(int j=i-1;j>0;j++){
//       if(arr[index]<arr[j]){
//         index=j;
//       }
//     }
//     swap(arr[index],arr[i]);
//   }
// }



void SelectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // assume current i is the smallest
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // update if smaller found
            }
        }
        swap(arr[i], arr[minIndex]); // place the smallest at position i
    }
}
