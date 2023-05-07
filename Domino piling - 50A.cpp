#include <iostream>
using namespace std;
int n, m, s, b,c;
int main() {
     cin>>m>>n;
     s=m*n;
     if (s%2==0) {
        b=s/2;
     }
     if (s%2==1) {
        b=(s-1)/2;
     }
     cout<<b;
  
  return 0;

}
