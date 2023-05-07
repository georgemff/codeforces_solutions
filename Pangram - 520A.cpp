#include <iostream>
#include <set>
using namespace std;
set<char> p;
string s;
int n;

int main(){
  cin>> n >> s;
  for ( int i=0; i<n; i++) {
      s[i] = tolower(s[i]);
      p.insert(s[i]);
  }
  if (p.size()>=26){
    cout << "YES";
  }
  else cout << "NO";
  return 0;
}
