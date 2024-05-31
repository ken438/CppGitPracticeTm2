#include "pch.h"
#include "FindFibonacciGcd.h"

TEST(FindFibonacciGcd, gcd) {
	EXPECT_EQ(gcd(1, 1), 1);
	EXPECT_EQ(gcd(2, 4), 2);
	EXPECT_EQ(gcd(8, 12), 4);
}

TEST(FindFibonacciGcd, fibonacci) {
	EXPECT_EQ(fibonacci(1), 1);
	EXPECT_EQ(fibonacci(2), 1);
	EXPECT_EQ(fibonacci(3), 2);
	EXPECT_EQ(fibonacci(4), 3);
	EXPECT_EQ(fibonacci(5), 5);
	EXPECT_EQ(fibonacci(6), 8);
}

TEST(FindFibonacciGcd, findFibonacciGcd) {
	EXPECT_EQ(findFibonacciGcd(1, 1), 1);
	EXPECT_EQ(findFibonacciGcd(3, 3), 3);
	EXPECT_EQ(findFibonacciGcd(3, 6), 3);

	// fibonacci(8) = 21, fibonacci(12) = 144
	EXPECT_EQ(findFibonacciGcd(8, 12), 4);
}