#include <iostream>
using namespace std;

int ans, i,n,length,last,j;
string s;

int main() {
    cin>>n;
    for (i=0; i<n; i++) {
      cin>>s;
      length=s.size();
      if(length>10) {
        cout<<s[0]<<length-2<<s[length-1]<<endl;

      }
      else
        cout<<s<<endl;
   }

   return 0;

}
