#include <cmath>
#include <iostream>

typedef unsigned long long ull;

ull solve(ull, int);

auto main(int argc, char *argv[]) -> int {
  int t;
  ull n;
 
  std::cin >> t;    
  while (t--) {
    std::cin >> n;
    std::cout << solve(n - 1, 3) + solve (n - 1, 5) - solve(n - 1, 15) << '\n';
  }    
    
  return 0;
}

auto solve(ull n, int p) -> ull {
  return (p * (n / p) * ((n / p) + 1)) >> 1;
}
