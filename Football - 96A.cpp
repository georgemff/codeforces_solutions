#include <iostream>
using namespace std;
int i, n, x, x1;
string f;
int main(){
  cin>>f;
  int n=f.size();
   for(i=0; i<n; i++){
    if(f[i]=='0'){
        x++;
        if(x>=7){
            cout<<"YES";
            return 0;
        }
    } else x=0;
     if(f[i]=='1'){
        x1++;
        if(x1>=7){
            cout<<"YES";
            return 0;
        }
    } else x1=0;
   }
    cout<<"NO";

    return 0;
}
