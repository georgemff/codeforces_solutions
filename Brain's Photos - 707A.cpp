#include <iostream> 
using namespace std; 
int n,m,i,x,j,h; 
char s[10005]; 
int main() { 
  cin>>n>>m; 
  h=n*m;
  for(i=0; i<h; i++) { 
     cin>>s[i]; 
  } 
  for(i=0; i<h; i++){
    if(s[i]=='C' || s[i]=='M' || s[i]=='Y'){
      x++;
    }
  }
  if(x>0){cout<<"#Color";}
  else cout<<"#Black&White";
  return 0;
}
