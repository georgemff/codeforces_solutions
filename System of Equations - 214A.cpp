#include <iostream>
using namespace std;
int main () {
  int n, m, a, b, i, j, x;
  cin>>n>>m;
  for (a=0; a<=32; a++) {
    for (b=0; b<=32; b++) {
      if (a*a+b==n && a+b*b==m) x++;
    }

  }
  cout<<x;
  return 0;
} 
