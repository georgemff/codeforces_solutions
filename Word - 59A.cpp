#include <iostream>
using namespace std;
string word;
int i,p,d;
int main() {
  cin>>word;
  for(i=0; i<word.size(); i++){
    if(word[i]>96){
        p++;
    }
    else d++;
  }
  if(p>d){
    for(i=0; i<word.size(); i++){
        if(word[i]<96){
            word[i]+=32;
        }
    }
  }
  if(p<d){
    for(i=0; i<word.size(); i++){
        if(word[i]>96){
            word[i]-=32;
        }
    }
  }
    if(p==d){
    for(i=0; i<word.size(); i++){
        if(word[i]<96){
            word[i]+=32;
        }
    }
  }
  cout<<word;

  return 0;
}
