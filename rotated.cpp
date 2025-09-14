void rotateClockwise(string &s){
  int n=s.size()
  char end=s[n-1];
  for(int i=n-2;i>=0;i--){
    s[i+1]=s[i];
  }
  s[0]=end;
}
void rotateAntiClockwise(string &s){
  int n=s.size()
  char start=s[0];
  for(int i=1;i<n;i--){
    s[i-1]=s[i];
  }
  s[n-1]=start;
}
bool rotateequalrotated(string str1,str2 ){
  string copy=str1;
  rotateClockwise(copy);
  rotateClockwise(copy);
  if(str1 == str2) return 1;

  rotateAntiClockwise(str1);
  rotateAntiClockwise(str1);
  if (str1 == str2) return 1

  return 0;


}