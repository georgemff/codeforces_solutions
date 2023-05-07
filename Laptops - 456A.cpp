#include <iostream>
using namespace std;
pair <long, long> m[10000005];
int n,a,i;
int main() {
  cin>>n;
  for(i=0; i<n; i++)
    cin>>m[i].first>>m[i].second;
    sort (m,m+n);
  for(i=0; i<n; i++) {
    if(m[i].first<m[i].second){
        cout<<"Happy Alex";
        return 0;
    }
  }
  cout<<"Poor Alex";
  return 0;
}
