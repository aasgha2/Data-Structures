/**
 * @file fib.cpp
 * Contains Fibonacci-number generating functions both utilizing and not
 * utilizing memoization.
 *
 * @author Matt Joras
 * @date Winter 2013
 */

#include "fib.h"

#include <map>

using std::map;

/**
 * Calculates the nth Fibonacci number where the zeroth is defined to be
 * 0.
 * @param n Which number to generate.
 * @return The nth Fibonacci number.
 */
unsigned long fib(unsigned long n)
{
  if(n == 0) {
    return 0;
  }
  if(n == 1) {
    return 1;
  }
  unsigned long fib1 = 1;
  unsigned long fib2 = 0;
  for(unsigned long i = 2; i <=  n; i++) {
    unsigned long temp = fib1;
    fib1 = fib1 + fib2;
    fib2 = temp;
  }

  return fib1;
}

/**
 * Calculates the nth Fibonacci number where the zeroth is defined to be
 * 0. This version utilizes memoization.
 * @param n Which number to generate.
 * @return The nth Fibonacci number.
 */
unsigned long memoized_fib(unsigned long n)
{
  static map<unsigned long, unsigned long> memo = {
      {0, 0}, {1, 1},
  };

  map<unsigned long, unsigned long>::iterator lookup = memo.find(n);

  if(lookup == memo.end()) {
    memo[n] = memoized_fib(n-1) + memoized_fib(n-2);
  }
  return memo[n];
}
