#include <iostream>
#include <vector>

typedef unsigned int ui;
typedef const unsigned int cui;
typedef std::vector<ui> vui;

auto prep(cui) -> vui;

auto main(int argc, char *argv[]) -> int {
  cui m = 1000;
  ui t, n;
  vui saved = prep(m);
  
  std::cin >> t;
  while (t--) {
    std::cin >> n;
    std::cout << saved[n + 1] << "\n";
  }

  return 0;
}

auto prep(cui m) -> vui {
  vui saved;

  saved.push_back(0);

  ui i = 0, t = 0;
  while (saved.size() < m) {
    i++;
    t += i;

    if (saved.size() > 300 && t % 10 != 0) {
      continue;
    }

    ui div = 0, j = 1;
    while (j * j < t) {
      if (t % j == 0) {
        div += 2;
      }
      
      j++;
    }

    if (j * j == t) {
      div++;
    }

    while (saved.size() <= div) {
      saved.push_back(t);
    }
  }

  return saved;
}