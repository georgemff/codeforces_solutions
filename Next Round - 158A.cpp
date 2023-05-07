#include <iostream>

using namespace std;
int n, k, a[105],m,ans,j,i,x;
int main() {
  cin>>n>>k;

  for (i=0; i<n; i++) {
      cin>>a[i];
      if(a[i]==0) {
        continue;
      } else if (a[i]>=a[k-1]) {
          ans++;
      }
  }
  
  cout<<ans;

  return 0;
}
