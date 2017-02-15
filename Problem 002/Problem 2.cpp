#include <iostream>
#include <vector>

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
  std::vector<ull> fib {0, 2};
  ull res = 2, sum = 0, tmp = 0;
  
  while(fib.at(1) < n) {
    tmp = fib.at(0);
    fib.at(0) = fib.at(1);
    sum = 4 * fib.at(0) + tmp;
    
    if (sum < n) {
      fib.at(1) = sum;
      res += fib.at(1);
    }
    else {
      break;
    }
  }
  
  return res;
}
