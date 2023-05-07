#include <iostream>
using namespace std;
long long n, i, answer,  x;
int main (){
  cin>>n;
  if(n%2==0){
    answer=n/2;
  }
  else {
   x=(n/2)+1;
   answer=x-(x*2);
  }
  cout<<answer;
  return 0;
}
