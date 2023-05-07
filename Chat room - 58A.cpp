#include <iostream>
#include <string>

int main() {
    std::string m{};
    std::string cw = "hello";
    std::cin >> m;
    int pi{0};
    int countMatch{0};
    for(int i = 0; i < 6; i++) {
        char c = cw[i];

        for(int j = pi; j < m.length(); j++) {
            if(m[j] == c) {
                pi = j + 1;
                countMatch++;
                break;
            }
        }
    }

    if(countMatch == 5) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }


    return 0;
}
