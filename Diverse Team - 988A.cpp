#include <iostream>
using namespace std;
int main(){
  int n, k, i, j, m, l;
  cin>>n>>k;
  int a[n], a1[n];
  for(i=0; i<n; i++){
    cin>>a[i];
    a1[i]=a[i];
  }
  for(i=0; i<n; i++){
    for(j=n; j>i; j--){
      if (a[i]==a1[j]){
        a1[j]=0;
      }
    }
  }
  for(i=0; i<n; i++){
    if(a1[i]>0){
        m++;
    }
  }
  if(m>=k){
    cout<<"YES"<<endl;
    for(i=0; i<n; i++){
      if(a1[i]>0){
        cout<<i+1<<" ";
        l++;
        if(l==k){return 0;}
      }
    }
  } else cout<<"NO";

  return 0;
}
