#include <iostream>
#include <map>
using namespace std;

map <string, int> a;
int i, n;
string k;

int main(){
    cin>>n;
    for(i=0; i<n; i++){
        cin>>k;
        a[k]++;
        if(a[k]==1) cout<<"OK"<<endl;
          else cout<<k<<a[k]-1<<endl;
    }

    return 0;
 
}
