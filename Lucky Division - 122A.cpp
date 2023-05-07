#include <iostream>

using namespace std;

bool is_lucky(int n) {
     while(n > 0) {
        if(n%10 != 4 && n%10 != 7) {
            return false;
        }
        n = n / 10;
    }
    
    return true;
}

bool is_almost_lucky(int n) {
    int l[8] = {4, 7, 44, 47, 77, 444, 447, 474};
    for(int i = 0; i < 8; i++) {
        if(n % l[i] == 0) {
            return true;
        }
    }
    return false;   
}

int main()
{
    int n;
    cin >> n;
    
    bool isLucky = is_lucky(n);
   
    
    if(isLucky) {
        cout << "YES";
        return 0;
    }
    
    isLucky = is_almost_lucky(n);
    
     if(isLucky) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
