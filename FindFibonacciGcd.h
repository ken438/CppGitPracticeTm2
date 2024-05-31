#pragma once

#include <numeric>

// [NOTE] 本ソースコードはGit操作の練習用のため、各関数のコーナーケース・例外処理を考慮する必要はありません。

/// <summary>
/// 最大公約数を求める
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <returns>aとbの最大公約数</returns>
/// e.g., (a = 12, b = 21) -> 3, ...
uint32_t gcd(uint32_t a, uint32_t b);

/// <summary>
/// n番目のフィボナッチ数を求める
/// </summary>
/// <param name="n"></param>
/// <returns>n番目のフィボナッチ数</returns>
/// e.g., (n = 1) -> 1, (n = 2) -> 1, (n = 3) -> 2, (n = 4) -> 3, (n = 5) -> 5, (n = 6) -> 8, ...
uint32_t fibonacci(uint32_t n);

/// <summary>
/// n, m番目のフィボナッチ数の最大公約数が、何番目のフィボナッチ数であるかを求める
/// </summary>
/// <param name="n"></param>
/// <param name="m"></param>
/// <returns>返り値xは、fibonacci(x) == gcd(fibonacci(n), fibonacci(m))</returns>
/// <reamarks>
/// フィボナッチ数の番号は `fibonacci()` 関数と同じ。
/// 最大公約数が1のときは、1を返す。
/// max(n, m) <= 1000 としてよい。
/// </reamarks>
uint32_t findFibonacciGcd(uint32_t n, uint32_t m);
