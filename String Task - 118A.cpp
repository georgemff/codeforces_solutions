#include <iostream>
using namespace std;
string s, answer;
int i,j,n,k;
int main() {
   cin>>s;
   n=s.size();
   for(i=0; i<n; i++){
      for(k=0; k<n; k++)  {
      if(s[i]=='A' || s[i]=='a'){s.erase(i,1);}
       if(s[i]=='O' || s[i]=='o'){s.erase(i,1);}
        if(s[i]=='Y' || s[i]=='y'){s.erase(i,1);}
         if(s[i]=='E' || s[i]=='e'){s.erase(i,1);}
          if(s[i]=='U' || s[i]=='u'){s.erase(i,1);}
           if(s[i]=='I' || s[i]=='i'){s.erase(i,1);}
      }
   }
   j=s.size();
   for(i=0; i<j; i++){
             if(s[i]<96) s[i]+=32;
    answer=answer+'.'+s[i];
   }
   cout<<answer<<endl;

   return 0;
}
