/**
 * Defines testAll() which calls
 * all our test functions
 *
 */

#include <iostream>
#include <cassert>

using namespace std;

// prototype for Factorial
int Factorial(int x);


void Test01() {
  assert(1 == 1);
  cout << "Test01 complete" << endl;
}

void Test02() {
  assert(1 == Factorial(0));
  cout << "Test02 complete" << endl;
}

void Test03() {
  assert(2 == Factorial(2));
  cout << "Test03 complete" << endl;
}

void Test04() {
  assert(120 == Factorial(5));
  cout << "Test04 complete" << endl;
}

void TestAll() {
  Test01();
  Test02();
  Test03();
  Test04();
  cout << "TestAll complete" << endl;
}