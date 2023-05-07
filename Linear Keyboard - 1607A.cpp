#include <iostream>
#include <string>

int main() {
    std::string k{};
    std::string w{};
    int n{};
    constexpr int kLength{26};

    std::cin >> n;
    for(int i = 0; i < n; i++) {
        std::cin >> k >> w;
        int kp{0};
        int time{0};

        for(int ci = 0; ci < w.length(); ci++) {

            for(int ki = 0; ki < kLength; ki++) {
                if(k[ki] == w[ci]) {
                    if(ci > 0) {
                        time = time + abs(kp - ki);
                    }
                    kp = ki;
                }
            }
        }
        std::cout << time << '\n';
    }

    return 0;
}
