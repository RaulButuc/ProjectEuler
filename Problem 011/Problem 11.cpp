#include <vector>
#include <iostream>

typedef unsigned long long ull;

const int pSize = 4;
const int arrSize = 20;

int v[arrSize][arrSize];

auto solve()->ull;

auto main(int argc, char *argv[]) -> int {
  for (auto i = 0; i < arrSize; ++i) {
    for (auto j = 0; j < arrSize; ++j) {
      std::cin >> v[i][j];
    }
  }

  std::cout << solve() << "\n";

  return 0;
}

auto solve() -> ull {
  ull r = 0;

  for (auto i = 0; i < arrSize; ++i) {
    for (auto j = 0; j < arrSize - (pSize - 1); ++j) {
      ull t = v[i][j] * v[i][j + 1] * v[i][j + 2] * v[i][j + 3];
      if (r < t) {
        r = t;
      }
    }
  }

  for (auto i = 0; i < arrSize - (pSize - 1); ++i) {
    for (auto j = 0; j < arrSize; ++j) {
      ull t = v[i][j] * v[i + 1][j] * v[i + 2][j] * v[i + 3][j];
      if (r < t) {
        r = t;
      }
    }
  }

  for (auto i = 0; i < arrSize - (pSize - 1); ++i) {
    for (auto j = 0; j < arrSize - (pSize - 1); ++j) {
      ull t = v[i][j] * v[i + 1][j + 1] * v[i + 2][j + 2] * v[i + 3][j + 3];
      if (r < t) {
        r = t;
      }
    }
  }

  for (auto i = 0; i < arrSize - (pSize - 1); ++i) {
    for (auto j = pSize - 1; j < arrSize; ++j) {
      ull t = v[i][j] * v[i + 1][j - 1] * v[i + 2][j - 2] * v[i + 3][j - 3];
      if (r < t) {
        r = t;
      }
    }
  }

  return r;
}
