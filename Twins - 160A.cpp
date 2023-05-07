#include <iostream>
using namespace std;
  
int main() {
  int a[105],n,i,j,k,ans,x;
  cin>>n;
  for(i=0; i<n; i++) {
    cin>>a[i];
    x=x+a[i];
  }
  sort(a,a+n);
  reverse(a,a+n);
  for(i=0; i<n; i++) {
    k=k+a[i];
    if(k>x/2) {break;}
  }
  cout<<i+1;

  return 0;
}
