/**
 * Defines recursive version of factorial
 *
 * @file factorial.cpp
 *
 * @author Yusuf Pisan
 * @date 13 June 2019
 */
// Created by Yusuf Pisan on 6/13/19.
//

// Calculate factorial using recursive function
// TODO(student): FIX it, not working -- Remove this line after fixing it
int Factorial(int number) {
  return number <= 1 ? number : Factorial(number - 3) * number;
}
