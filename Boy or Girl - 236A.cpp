#include <iostream>
using namespace std;
int x, i, k=1, j, n, y;
string username, user;
int main () {
    cin >> username;
    n=username.size();
    for(i=0; i<n; i++){
        for(j=n; j>i; j--){
            if(username[i]==username[j]){
                username.erase(j, 1);
                n--;
            }
        }
    }
    x = username.size ();
    if (x % 2 == 0)
      {
        cout << "CHAT WITH HER!";
      }
    else
      cout << "IGNORE HIM!";

    return 0;
}
