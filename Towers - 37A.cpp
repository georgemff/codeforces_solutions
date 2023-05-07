#include <iostream>
using namespace std;
  
int main() {
  int a[1005],n,i,k,x,y;
  cin>>n;
  for (i=0; i<n; i++) {
    cin>>k;
    a[k]++;
  }
  for (i=0; i<1001; i++) {
   if  (x<a[i]) x=a[i];
   if  (a[i]>0) y++;
  }
  cout<<x<<" "<<y;
  return 0;
}
