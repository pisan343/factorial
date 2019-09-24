/**
 * Defines testAll() which calls
 * all our test functions
 *
 * @file maintest.cpp
 *
 * @author Yusuf Pisan
 * @date 24 Sep 2019
 */

#include <iostream>
#include <cassert>
#include <sstream>

using namespace std;

// prototypes to be tested
int factorialRecursive(int x);
int factorialIterative(int x);
int factorial(int x);
void factorialWrite(int x, ostream &os);


// Testing base condition
void test01() {
  assert(1 == factorialRecursive(1) && "factorialRecursive of 1 should be 1");
  assert(1 == factorialIterative(1) && "factorialIterative of 1 should be 1");
  stringstream ss;
  factorialWrite(1, ss);
  assert("1" == ss.str() && "factorialWrite should be writing 1 to output stream");  
  cout << "test01 complete" << endl;
}

// Testing definition 0! = 1
void Test02() {
  assert(1 == factorial(0));
  cout << "Test02 complete" << endl;
}

// Testing small number
void Test03() {
  assert(2 == factorial(2));
  cout << "Test03 complete" << endl;
}

// Testing recursion
void Test04() {
  assert(120 == factorial(5));
  cout << "Test04 complete" << endl;
}

// Testing large number
void Test05() {
  // assert(2432902008176640000 == factorial(20));
  cout << "Test05 complete" << endl;
}

// run all tests
void testAll() {
  test01();
  Test02();
  Test03();
  Test04();
  Test05();
  cout << "TestAll complete" << endl;
}
