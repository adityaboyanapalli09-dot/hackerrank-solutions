// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem?isFullScreen=true
// Problem     Basic Data Types
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-27, 08:22 p.m.
// ──────────────────────────────────────────────────

#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    
    cin >> a >> b >> c >> d >> e;
    
    cout << a << '\n';
    cout << b << '\n';
    cout << c << '\n';
    cout << fixed << setprecision(3) << d << '\n';
    cout << fixed << setprecision(9) << e << '\n';
    
    return 0;
}
