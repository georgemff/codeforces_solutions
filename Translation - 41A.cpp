#include <iostream> 
using namespace std; 

int main() { 
  int n,m,i,x,j,h; 
  string s1,s2,word;
  cin>>s1>>s2;
  for(i=s2.size()-1; i>=0; i--){
    word=word+s2[i];

  }
  if(s1==word){
   cout<<"YES";
  } else cout<<"NO";
  
  return 0;
}
