//
//  main.cpp
//  dp
//
//  Created by Wills Liou on 12/4/20.
//  Copyright © 2020 Wills Liou. All rights reserved.
//

/*
Project Euler -> 2
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/


// TRY:
// 1. recursive approach
// 2. DP approach
#include <iostream>
#include <vector>
using namespace std;

// Series approach 4*(i-1) + (i-2)
unsigned long long fib_dp_series(int n) {
    // Declare vector called dp
    vector<int> dp = {0};
    // Initialize first and second elements as 1 and 2
    dp[0] = 2;
    dp[1] = 8;
    // Account for starting at index 2 in the for loop
    int sum = 0;
    sum += dp[0];
    sum += dp[1];
    cout << "Begin iteration\n";
    // Get elements in fib sequence
    for (int i = 2; i < n; i++)
    {
        if (sum > 4000000) { return sum; } // bruh
        dp[i] = (4*dp[i-1]) + dp[i-2];
        // If element calculated is even, add to sum
        sum += dp[i];
//        cout << "Adding" << dp[i] << endl;
//        cout << "curr sum" << sum << endl;
        // cout << dp[i] << " ";
    }
    return sum;
}


// Dynamic Progrmaming approach. Store last used.
unsigned long long fib_dp(int n, unsigned long long &sum) {
    // Declare vector called dp
    vector<unsigned long long int> dp = {0};
    // Initialize first and second elements as 1 and 2
    dp[0] = 1;
    dp[1] = 2;
    // Account for starting at index 2 in the for loop
    sum = 2;
    // Get elements in fib sequence
    for (int i = 2; i < n; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
        // If element calculated is even, add to sum
        if (dp[i] % 2 == 0) {
            sum += dp[i];
        }
        // cout << dp[i] << " ";
    }
    return sum;
}

// Naive Approach
int fib_naive(int n, unsigned long long &sum) {
    if (n == 1) {
        return 1;
    }
    else if (n % 2 == 0) {
        sum += n;
    }
    return fib_naive(n-1, sum) + fib_naive(n-2, sum);
}


int main() {
    // 4 000 000
    int n = 4000000;
//    unsigned long long sum = 0;
    // cout << fib_naive(n, sum) << endl;
//    cout << fib_dp(n, sum) << endl;
    cout << fib_dp_series(n) << endl;

}

