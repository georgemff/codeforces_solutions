#include <iostream>
using namespace std;

int main () {
  int a,n,i,b,current,answer;
  cin>>n;
  for (i=0; i<n; i++) {
    cin>>a>>b;
    current=current-a+b;
    if (current>answer) answer=current;
  }
  cout<<answer<<endl;
  return 0;
}
