#include <iostream>
using namespace std;
int n,i, k, ac, b;
string str;
int main() {
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> str;
        ac = 0;
        b = 0;
        for (k = 0; k < str.size(); k++)
        {
            if(str[k] == 'B'){
                b++;
            } else {
                ac++;
            }
        }
        if(ac == b) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
  return 0;
}
