/**
 * Factorial example using CATCH
 * @file main.cpp
 *
 *
 * @author Yusuf Pisan
 * @date 7 Dec 2018
 */

#include <iostream>



//  Calculate factorial
// TODO: FIX it, not working
int Factorial(int number) {
  return number <= 1 ? number : Factorial(number - 3) * number;
}

#ifdef USE_CATCH
#include "catch.hpp"

// Simple CATCH tests for factorial
// TODO: ADD more tests once it is fixed
TEST_CASE("factorial tests") {
  REQUIRE(Factorial(1) == 1);
}

#else

// If not using CATCH framework, call functions directly
// CMakeLists.txt determines if using CATCH or not
int main() {
  // You can use NOLINT to disable cpplint checks on that line if necessary
  std::cout << "This is user-defined main. " << "CATCH_CONFIG_MAIN not defined. "  // NOLINT
            << "Not using CATCH generated main" << std::endl;
  std::cout << "Hello World :-)" << std::endl;
  return 0;
}

#endif  // USE_CATCH
