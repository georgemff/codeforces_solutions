#include <iostream>
using namespace std;
int n,i, answer;
string s;
int main() {
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>s;
                if (s=="X++" || s=="++X") {
            answer++;
        }
         if (s=="X--" || s=="--X") {
            answer--;
        }

    }
    cout<<answer;
    return 0;
}
