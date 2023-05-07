#include <iostream>
using namespace std;
int main() {
    int coordinate, minimum, x, n, m, s;
    x=5;
    cin>>coordinate;

    if (coordinate%x==0) {
      minimum=coordinate/x;
      cout<<minimum;
    }

    if (coordinate%x>0) {

      s=coordinate/x;

      m=m+s;

      coordinate=coordinate%x;
      m++;
      cout<<m;
    }
    
    return -0;
}
