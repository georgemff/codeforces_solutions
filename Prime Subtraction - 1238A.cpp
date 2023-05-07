#include <iostream>
using namespace std;
int n, t, i, p;
long long x, y;
string ans[1001];
main() {
  cin>>t;
  for (i=0; i<t; i++){
    cin>>x>>y;
    if(x-y>1){
        ans[i]="YES";
    } else {
        ans[i]="NO";
    }
  }
  n = sizeof(ans) / sizeof(ans[0]);
  for(i=0; i<n; i++) {
    cout<<ans[i]<<endl;
  }
}
