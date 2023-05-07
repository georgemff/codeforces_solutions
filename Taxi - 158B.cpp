#include <iostream>
using namespace std;

 int i, j, x1,x2,x3,x4,k,n, ans;
 int main () {
  cin>>n;
  for (i=0; i<n; i++) {
    cin>>k;
    switch (k) {
     case 1: x1++;
      break;
     case 2: x2++;
      break;
     case 3: x3++;
      break;
     case 4: x4++;
    }
  }
   
  ans=x4+x3+x2/2;
  x1=x1-x3;
   
  if (x2%2==1) {
    ans++;
    x1=x1-2;
  }
   
  if (x1>0) ans=ans+(x1+3)/4;
   
  cout<<ans;
  return 0;

  }
