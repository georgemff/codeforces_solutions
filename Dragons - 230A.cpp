#include <iostream>
using namespace std;
pair <int, int> d[1005];

int main() {
    int n,m;
    cin>>m>>n;
    for(int i=0; i<n; i++)
        cin>>d[i].first>>d[i].second;
        sort(d,d+n);
    
    for(int i=0; i<n; i++) {
        if(m>d[i].first)
            m=m+d[i].second;
        else {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";

    return 0;
}
