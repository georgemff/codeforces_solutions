#include <iostream>
using namespace std;
char color[55];
int i,n,ans;
int main() {
  cin>>n;
  for(i=0; i<n; i++) {
    cin>>color;
  }
  for(i=0; i<n; i++) {
    if(color[i]==color[i+1]) {
        ans++;
    }
  }
  cout<<ans;

  return 0;
}
