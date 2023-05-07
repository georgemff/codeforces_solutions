#include <iostream>
using namespace std;
int a, b, c,g,h,n,p, maximum;
int main () {
   cin>>a>>b>>c;
   maximum=a*b*c;
   n=(a+b)*c;
   if(n>maximum){
    maximum=n;
   }
   g=a+b*c;
   if(g>maximum) {
    maximum=g;
   }
   h=a*(b+c);
   if(h>maximum){
    maximum=h;
   }
   p=a+b+c;
   if(p>maximum){
    maximum=p;
   }
   cout<<maximum;
  
  return 0;
}
