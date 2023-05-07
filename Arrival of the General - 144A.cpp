#include <iostream>
using namespace std;
  
int main() {
  int a[101],n,i,mini, maxi, mininom, maxinom, ans;
  cin>>n;
  for (i=1; i<=n; i++) cin>>a[i];
  
  mininom=1; mini=a[1];

  for (i=2; i<=n; i++) {
    if (mini>=a[i]) {
      mini=a[i]; mininom=i;
    }
  }
  maxinom=1; maxi=a[1];

  for (i=2; i<=n; i++) {
    if (maxi<a[i]) {
      maxi=a[i]; maxinom=i;
    }       
  }
  
  ans=maxinom-1+n-mininom;

  if (maxinom>mininom) ans--;
  
  cout<<ans;
  
  return 0;

}
