int revInteger(int num){
  int ans=0, rem;
  while(num){
    rem = num%10;
    ans= ans*10+ rem;
    num /=10;
  }
   return ans;
}