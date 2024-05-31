#include "pch.h"
#include "FindFibonacciGcd.h"

/* ‚±‚±‚ÉFindFibonacciGcd.h‚Å’è‹`‚µ‚½ŠÖ”‚ğÀ‘•‚·‚é@*/

uint32_t gcd(uint32_t a, uint32_t b) {
	if (a == 0) {
		return b;
	}
	else if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a % b);
	}
}

uint32_t fibonacci(uint32_t n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		uint32_t a = 0;
		uint32_t b = 1;
		uint32_t c = 0;
		for (uint32_t i = 2; i <= n; i++) {
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}
}

uint32_t findFibonacciGcd(uint32_t n, uint32_t m) {
	uint32_t gcdNum = gcd(fibonacci(n), fibonacci(m));
	uint32_t i = 0;
	while (gcdNum != fibonacci(i)) {
		++i;
	}
	return i;
}