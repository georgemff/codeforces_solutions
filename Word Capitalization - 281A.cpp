#include <iostream>
using namespace std;
string s;
int i,n,ans;
int main() {
    cin>>s;
    if(s[0]>96){
        s[0]-=32;
    }
    cout<<s;

    return 0;
    
}
