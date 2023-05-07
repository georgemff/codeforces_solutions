#include <iostream>
using namespace std;
int n, a, b, c, s, i;
int main () {

  cin>>n;
  for (i=0; i<n; i++) {
    cin>>a>>b>>c; 
    if (a+b+c>=2) {  
        s++;
    }
  }
  
  cout<<s;
  
  return 0;

}
