#include <iostream>
using namespace std;
string s;
int n,m,i;
int main() {
    cin>>s;
    n=s.size();
    sort(s.begin(),s.end());
    m=(n-1)/2;
    s.erase(0,m);
    cout<<s[0];
    for(i=1; i<n-m; i++) {
    cout<<"+"<<s[i];
    }

    return 0;
}
