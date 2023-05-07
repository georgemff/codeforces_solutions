#include <iostream>
using namespace std;

int n, m[100002], i, j, k;
int main(){
  cin>>n;
  for(i=0; i<n; i++){
    cin>>m[i];
  }
  for(i=0; i<n; i++){
    for(j=i+1; j<i+2; j++){
      if(m[i]!=m[j]){
        k++;
      }
    }
  }
  cout<<k;
  return 0;
}
