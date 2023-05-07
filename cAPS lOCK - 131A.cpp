#include <bits/stdc++.h>
using namespace std;

main() {
    string word;
    int i, x=0,j;
    
    cin>>word;
    
    for(i=1; i<word.size(); i++) {
        if(word[i]>96) {
            cout<<word;
            return 0;
        }
    }
    
    for(i=0; i<word.size(); i++) {
        if (word[i]<96) {
            x++;
        }
    }
    
    if(x==word.size()) {
        for(i=0; i<word.size(); i++) {
            word[i]+=32;
        }

        cout<<word; return 0;
    
    } else {
        word[0]-=32;
    }
        
    for(i=1; i<word.size(); i++){
        word[i]+=32;
    }
  
    cout<<word;
    
    return 0;
}
