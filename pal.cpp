bool palindrome(int n){
 int copy = n, rem,ans=0;
  while(copy){
    rem = copy%10;
    ans *= 10 + rem;
    copy /=10;

  }
   if(ans==n) return 1;
   else return 0;
}