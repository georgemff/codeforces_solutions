#include <iostream>
using namespace std;
string a, b, c;
int main(){
  cin>>a>>b>>c;
  a=a+b;
  sort(a.begin(), a.end());
  sort(c.begin(), c.end());
  if(a==c){
    cout<<"YES";
  }
  else cout<<"NO";
  return 0;
}
