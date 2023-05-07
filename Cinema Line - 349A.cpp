#include <iostream>
using namespace std;
 

int main () {
  int i, n, k, x25, x50;
  long long j;
  cin>>n;
  for (i = 0; i < n; i++) {
    cin>>k;
    if (k==25) {
      x25++; 
      continue;
    }
    if (k==50) {
      if (x25>0) {
        x25--;
        x50++;
      } else {
          cout<<"NO"; 
          return 0;
        } 
    }
    if (k==100) { 
      if (x50>0 && x25>0) {
        x50--; 
        x25--; 
        continue;
      }
      if (x25>2) {
        x25=x25-3; 
        continue;
      }
      cout<<"NO"; return 0;
    }
  }
  cout<<"YES";
  return 0;
}
