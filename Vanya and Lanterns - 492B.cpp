#include <iostream>
#include <algorithm>
#include <set>
#include <iomanip>

int main() {
    int n{};
    int l{};
    std::set<int> ua;
    int d{0};

    std::cin >> n >> l;

    for(int i = 0; i < n; i++) {
        int ai;
        std::cin >> ai;
        ua.insert(ai);
    }

    d = *(ua.begin()) * 2;
    if(d == 0) {
        d = *(++ua.begin());
    }

    int last = (l - *(--ua.end())) * 2;

    d = std::max(d, last);

    for(auto itr = ua.begin(); itr != --ua.end(); itr++) {
        auto current = itr;
        if((*(++current) - *itr) > d) {

            d = (*(current) - *itr);
        }
    }
    std::cout << std::setprecision(9);
    std::cout << static_cast<double>(d) / 2;

    return 0;
}
