#include <iostream>

const int d = 2;
int calculate(int a1, int a2, int a3) {
    return abs((a1 + a3) - a2 * d);
}

int main() {
    int t;
    int a1, a2, a3;
    std::string ans;
    std::cin >> t;

    for(int i = 0; i < t; i++) {
        std::cin >> a1 >> a2 >> a3;

        int c = calculate(a1, a2, a3);
        if(c % 3 > 1) {
            c--;
        }
        std::cout << c % 3 << '\n';


    }
    for(int i = 0; i < ans.length(); i++) {
        std::cout << ans[i] << '\n';
    }
    return 0;
}
