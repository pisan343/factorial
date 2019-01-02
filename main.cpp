/**
 * Factorial example using CATCH@brief CATCH framework example
 * @file main.cpp
 *
 *
 * @author Yusuf Pisan
 * @date 7 Dec 2018
 */


// *** MUST DEFINE ONE OF *** CATCH_CONFIG_MAIN  or CATCH_CONFIG_RUNNER
// CATCH_CONFIG_MAIN -- defines its own main() do this only once
#define CATCH_CONFIG_MAIN
// CATCH_CONFIG_RUNNER -- use CATCH as a module, run your own main
// #define CATCH_CONFIG_RUNNER

#include <iostream>
#include "catch.hpp"


//  Calculate factorial
// TODO: FIX it, not working
int Factorial(int number) {
  return number <= 1 ? number : Factorial(number - 3) * number;
}

// Simple CATCH tests for factorial
// TODO: ADD more tests once it is fixed
TEST_CASE("factorial tests") {
  REQUIRE(Factorial(1) == 1);
}

#ifndef CATCH_CONFIG_MAIN

// If not using CATCH framework, call functions directly
int main() {
  // You can use NOLINT to disable cpplint checks on that line if necessary
  std::cout << "This is user-defined main. " << "CATCH_CONFIG_MAIN not defined. "  // NOLINT
            << "Not using CATCH generated main" << std::endl;
  std::cout << "Hello World :-)" << std::endl;
  return 0;
}

#endif  // CATCH_CONFIG_MAIN
