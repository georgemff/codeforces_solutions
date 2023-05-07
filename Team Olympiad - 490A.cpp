#include <iostream>
#include <stack>
using namespace std;
int n, i, t;
stack<int> s1, s2, s3, w1, w2, w3;
int main(){
    cin>>n;
    for(i=1; i<=n; i++){
        cin>>t;
        if(t==1){s1.push(t); w1.push(i);}
         if(t==2){s2.push(t); w2.push(i);}
          if(t==3){s3.push(t); w3.push(i);}
    }
    n=min(s1.size(),min(s2.size(), s3.size()));

    t=min(w1.size(),min(w2.size(), w3.size()));
    cout<<n<<endl;
    for(i=0; i<t; i++){
        cout<<w1.top()<<" ";
        w1.pop();
        cout<<w2.top()<<" ";
        w2.pop();
        cout<<w3.top()<<endl;
        w3.pop();
    }

    return 0;
}
