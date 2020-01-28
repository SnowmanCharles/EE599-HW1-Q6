#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual = solution.PrintHelloWorld();
  std::string expected = "**** Hello World ****";
  EXPECT_EQ(expected, actual);
}

TEST(Factorial, NegativeInput) {
  Solution solution;
  EXPECT_EQ(-1, solution.Factorial(-2));
}

TEST(Factorial, ZeroInput) {
  Solution solution;
  EXPECT_EQ(1, solution.Factorial(0));
}

TEST(Factorial, PositveInput) {
  Solution solution;
  EXPECT_EQ(120, solution.Factorial(5));
}

TEST(FactorialRecursive, NegativeInput) {
  Solution solution;
  EXPECT_EQ(-1, solution.FactorialRecursive(-2));
}

TEST(FactorialRecursive, ZeroInput) {
  Solution solution;
  EXPECT_EQ(1, solution.FactorialRecursive(0));
}

TEST(FactorialRecursive, PositveInput) {
  Solution solution;
  //std::cout << "*************8here" << solution.FactorialRecursive(5);
  EXPECT_EQ(120, solution.FactorialRecursive(5));
}