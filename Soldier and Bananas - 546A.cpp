#include <iostream>
using namespace std;
      

int main () {
    int k, n, w, s, m, d;
    cin>>k>>n>>w;
    while (w>0) {
        d=k*w;
        m=m+d;
        w--;
    }
    s=m-n;
    if (s>0) {
        cout<<s;
    }
    else 
    cout<<"0";

    return 0;
}
