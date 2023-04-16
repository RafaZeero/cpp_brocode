#include <iostream>

int main() {
  const double PI = 3.14159;
  double radius = 10;
  double circumference = 2 * PI * radius;
  std::string unit = "cm";

  std::cout << circumference << unit;

  return 0;
}
