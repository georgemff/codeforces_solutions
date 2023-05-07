#include <iostream>
using namespace std;
double n, j, p, i, sum;

main () {
  cin>>n;
  for (i=0; i<n; i++) {
    cin>>j;
    sum=sum+j;
  }
  cout<<sum/n;

}
