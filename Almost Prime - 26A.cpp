#include <iostream>
using namespace std;

int main() {
  int n, num[3005], i, j, ans;
  cin>>n;
  for(i=2; i<=n; i++){
    if(num[i]==0) {
        j = i;
    } else continue;
    
    while(j <= n){
      num[j] += 1;
      j+=i;
    }
  }

  for (const auto & e : num) {
    if(e == 2){
      ans++;
    }
  }

  cout<<ans;
  return 0;
}
