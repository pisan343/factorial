/**
 * Defines various versions of factorial
 *
 * @file factorial.cpp
 *
 * @author Yusuf Pisan
 * @date 24 Sep 2019
 */

#include <iostream>
#include <cmath>

// Only for class code, OK to use namespace
using namespace std;

// Calculate factorial using recursive function
// TODO(student): FIX it, not working -- Remove this line after fixing it
int factorialRecursive(int number) {
  return number <= 1 ? number : factorialRecursive(number - 3) * number;
}

// Calculate factorial using iterative function
// TODO(student): FIX it, not working -- Remove this line after fixing it
int factorialIterative(int number) {
  return 1;
}

// Generic factorial function
// TODO(student): FIX it, not working -- Remove this line after fixing it
int factorial(int number) {
  return factorialRecursive(number);
}

// Writes the result of factorial to given ostream or cout
void factorialWrite(int number, ostream& os = cout) {
  os << factorial(number) << endl;
}
