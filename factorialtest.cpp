/**
 * Defines testAll() which calls
 * all our test functions
 *
 * @file maintest.cpp
 *
 * @author Yusuf Pisan
 * @date 13 June 2019
 */

#include <iostream>
#include <cassert>

using namespace std;

// prototype for Factorial
int Factorial(int x);


// Testing base condition
void Test01() {
  assert(1 == Factorial(1));
  cout << "Test01 complete" << endl;
}

// Testing definition 0! = 1
void Test02() {
  assert(1 == Factorial(0));
  cout << "Test02 complete" << endl;
}

// Testing small number
void Test03() {
  assert(2 == Factorial(2));
  cout << "Test03 complete" << endl;
}

// Testing recursion
void Test04() {
  assert(120 == Factorial(5));
  cout << "Test04 complete" << endl;
}

// Testing large number
void Test05() {
  assert(2432902008176640000 == Factorial(20));
  cout << "Test05 complete" << endl;
}

// run all tests
void TestAll() {
  Test01();
  Test02();
  Test03();
  Test04();
  Test05();
  cout << "TestAll complete" << endl;
}
