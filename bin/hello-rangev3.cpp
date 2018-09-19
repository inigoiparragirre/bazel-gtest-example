#include <iostream>
#include <vector>
#include <range/v3/all.hpp>

int main() {
  auto const xs = std::vector<int>({ 1, 2, 3, 4, 5 });
  auto const ys = xs
    | ranges::view::transform([](auto x) { return x * x; })
    | ranges::to_vector;
  for (auto const& i : ys) {
    std::cout << i << std::endl;
  }
  return 0;
}