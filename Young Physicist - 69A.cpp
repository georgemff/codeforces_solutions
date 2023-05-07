#include <iostream>
using namespace std;
int n, s, x, y, z, i, d, k;
int main () {
  cin>>n;
  for (i=0; i<n; i++) { 
    cin>>x>>y>>z;
    s=s+x;
    d=d+y;
    k=k+z;

    if (s==0 && d==0 && k==0) {
      cout<<"YES";
      break;
    } else continue;

  }
  if (s!=0 || d!=0 || k!=0) cout<<"NO";

  return 0;
}
