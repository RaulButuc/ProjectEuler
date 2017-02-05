#include <vector>
#include <iostream>

typedef unsigned long long ull;

auto solve(ull) -> ull;

auto main(int argc, char *argv[]) -> int {
    int t;
    ull n;
    
    std::cin >> t;
    
    while (t--) {
        std::cin >> n;
        std::cout << solve(n) << '\n';
    }
    
    return 0;
}

auto solve(ull n) -> ull {
    std::vector<ull> v;
    
    while (!(n % 2)) {
        n /= 2;
    }
    v.push_back(2);
    
    for (ull i = 3; i * i <= n; i += 2) {
        while (!(n % i)) {
            n /= i;
        }
        v.push_back(i);
    }
    
    if (n > 2) {
        v.push_back(n);
    }
    
    std::vector<ull>::reverse_iterator it = v.rbegin();
    
    return *it;
}
