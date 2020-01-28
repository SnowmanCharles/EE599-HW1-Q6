#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

int Solution::Factorial(int n) {
  if (n < 0) {
    return -1;
  }

  int fac = 1;
  for (int i = 1; i <= n; i++) {
    fac *= i;
  }
  return fac;
}

int Solution::FactorialRecursive(int n) {
  return n < 0 ? -1 : (n == 0 ? 1 : n * FactorialRecursive(n - 1));
}

