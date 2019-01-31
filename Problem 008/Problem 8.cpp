#include <iostream>
#include <string>

typedef unsigned long long ull;
typedef unsigned int ui;

auto solve(void) -> ull;

auto main(int argc, char *argv[]) -> int {
  ui t;

  std::cin >> t;
  while (t--) {
    std::cout << solve() << "\n";
  }

  return 0;
}

auto solve(void) -> ull {
  ull l, s, result = 0;
  std::string n;

  std::cin >> l >> s >> n;
  for (int i = 0; i + s < l; i++) {
    ull crt = 1;
    for (ull j = 0; j < s; j++) {
      crt *= n[i + j] - '0';
    }
    
    result = (result < crt) ? crt : result;    
  }
  
  return result;
}
