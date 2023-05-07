#include <iostream>
using namespace std;

int main () {
  int a,n,i,b, answer;
  cin>>n;
  for (i=0; i<n; i++) {
    cin>>a>>b;
    if (b-a>=2) answer++;
  }
  cout<<answer<<endl;
  return 0;
}
