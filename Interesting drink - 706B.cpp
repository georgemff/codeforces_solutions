#include <iostream>
#include <algorithm>

int main() {
    int shops[100000]{};
    int m[100000]{};
    int n{}, q{};

    std::cin >> n;

    for(int i{0}; i < n; i++) {
        std::cin >> shops[i];
    }

    std::sort(shops, &shops[n]);

    std::cin >> q;
    for(int i{0}; i < q; i++){
        std::cin >> m[i];
    }

    for(int i{0}; i < q; i++) {
        int found = -1;

        int min = 0;
        int max = n - 1;

        while(min <= max) {
            int mid = (min + max) / 2;
            if(shops[mid] > m[i]) {
                max = --mid;
            }
            if(shops[mid] <= m[i]) {
                found = mid;
                min = ++mid;
            }
        }

        if(found > -1) {
            std::cout << ++found << '\n';
        } else {
            std::cout << 0 << '\n';
        }
    }

    return 0;
}
