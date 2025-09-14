string defangingIP(string address){
  string ans;
  int start=0;
  int end=address.size()-1;
  while(start<end){
    if(address[start]=='.'){
      ans += '[.]';
    }
    else{
      ans +=address[start];
    }
    start++
  }
  return ans;
}