#include <iostream>
using namespace std;
 int n, m, Malvika, Akshat, minimum;


  main () {
      cin>>n>>m;
      if (n<m) {
        minimum=n;
      }
      else minimum=m;
      if (minimum%2==0) {
        cout<<"Malvika";
      }
      else
        cout<<"Akshat";

  }
