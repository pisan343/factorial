/**
 * Factorial example using CATCH
 * @file main.cpp
 *
 *
 * @author Yusuf Pisan
 * @date 7 Dec 2018
 */

#include <iostream>

// testAll is defined in another file
void TestAll();

// Calculate factorial
// TODO: FIX it, not working -- Remove TODO after fixing it
int Factorial(int number) {
  return number <= 1 ? number : Factorial(number - 3) * number;
}


int main() {
  TestAll();

  std::cout << "Done!" << std::endl;
  return 0;
}

