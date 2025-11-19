int firstAndLastPosition(int arr[],int size,int target){
  int start =0;
  int end=size-1;
  int first=-1;
  int last =-1;
  while(start<=end){
    int mid= start+(end-start)/2;
      if(arr[mid]==target){
        first=mid;
        end=mid-1;
      }
      else if(arr[mid]>target){
        end = mid-1;
      }
      else start= mid+1;
  }
  while(start<=end){
    int mid= start+(end-start)/2;
      if(arr[mid]==target){
        last=mid;
        start=mid-1;
      }
      else if(arr[mid]>target){
        end = mid-1;
      }
      else start= mid+1;
  }
  vector <int> ans;
  ans.push_back(first);
  ans.push_back(last);
  return ans;
}
