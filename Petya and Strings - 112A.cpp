#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string w1, w2;
    cin >> w1 >> w2;
    
    int n = w1.length();
 
    for(int i = 0; i < n; i++) {
        if(w1[i] < 97) {
            w1[i] += 32;
        }
        if(w2[i] < 97) {
            w2[i] += 32;
        }

        if(w1[i] > w2[i]) {
            cout << 1 << endl;
            return 0;
        } else if(w1[i] < w2[i]) {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << 0 << endl;
    
    return 0;
}
