#include <iostream>
using namespace std;
int n, y, z, i, ans;

int nozero(int x1){
  int m=1, k=0, x=0;
  while(x1>0) {
    k=x1%10;
    x=x+k*m;
    if(k!=0) m=m*10;
    x1=x1/10;
  }
  return x;
}
int main() {
  cin>>y>>z;
  n=y+z;
  if(nozero(y)+nozero(z)==nozero(n)) cout<<"YES";
  else cout<<"NO";
  return 0;
}
