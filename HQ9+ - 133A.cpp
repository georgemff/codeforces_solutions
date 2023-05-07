#include <iostream>
using namespace std;
string word;
int i;
int main() {
  cin>>word;
  for(i=0; i<word.size(); i++){
    if(word[i]=='H'){cout<<"YES";return 0;}
    if(word[i]=='Q'){cout<<"YES";return 0;} 
    if(word[i]=='9'){cout<<"YES";return 0;} 

  }
  cout<<"NO";
  return 0;
}
