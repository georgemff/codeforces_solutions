#include <iostream>
using namespace std;


int main() {
    long long n, k;

    cin >> n >> k;
    
    long long half = (n+1) / 2;

    if(k <= half) {
        cout << (k * 2) - 1 << endl;
    } else {
        cout << (k - half) * 2 << endl;
    }

    return 0;
}
