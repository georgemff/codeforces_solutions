#include <iostream>
using namespace std;
int mx, mn, n, i, a1, b, answer, answer2;

main () {
  cin>>n>>a1;
  mx=a1;
  mn=a1;

  for (i=1; i<n; i++) {
    cin>>b;

    if (b<mn) {
      answer++;
      mn=b;
    }
    if (b>mx) { answer++;
      mx=b;
    }
  }

  cout<<answer;

}
