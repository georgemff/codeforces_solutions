#include <iostream>
using namespace std;
  
int main() {
  int a[105],n,i,j,k,ans;
  cin>>n;
  for(i=0; i<n; i++){
      cin>>a[i];
  }
  sort(a,a+n);

  for (i=0; i<n; i++) {

  cout<<a[i]<<" ";
  }
  
  return 0;

}
