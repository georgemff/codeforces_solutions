#include <iostream>
using namespace std;
int n, a[365], chest, back1, biceps, i, pas;
string s;
int main() {
  cin>>n;
  for(i=0; i<n; i++) {
      cin>>a[i];
  }
  for(i=0; i<n; i++){
      if(i%3==0) chest=chest+a[i];
      if(i%3==1) biceps=biceps+a[i];
      if(i%3==2) back1=back1+a[i];
  }
  
  if(chest>biceps) {pas=chest; s="chest";}
  else {pas=biceps; s="biceps";}
  if(back1>pas) s="back";
  cout<<s;
  
  return 0;
}
