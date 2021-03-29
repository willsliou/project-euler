/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/


#include <iostream>
#include <vector>
// #include <queue>
// #include <deque>
// #include <string>
// #include <list>
// #include <stack>
// #include <map>
// #include <set>
// #include <numeric>
// #include <limits>
// #define REP(i, j) FOR(i, 0, j, 1)
// #define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
// #define PI 3.1415926535897932384626433832795
// #define PB push_back
using std::cin;
using std::cout;
using std::endl;
// template <typename T> inline void write(T x)
// {
// 	int i = 20;
// 	char buff[21];
// 	// buff[10] = 0;
// 	buff[20] = '\n';

// 	do
// 	{
// 		buff[--i] = x % 10 + '0';
// 		x/= 10;
// 	}while(x);
// 	do
// 	{
// 		putchar(buff[i]);
// 	} while (buff[i++] != '\n');
// }


int main() {
    const int MIN = 100;
    const int MAX = 999;

    uint32_t currMax = 0;
    for (int i = MAX; i <= MIN; i--) {
        unsigned product = i * MAX;

        // Check if product is palindrome
        char[] myProduct = product;
        char * lastIndex = product[myProduct.length() - 1];

        for (int index = 0; index < myProduct.length(); index++)
        {
            if (myProduct[index] != myProduct[lastIndex]) {
                
            }
            lastIndex--;
        }
        // Replace with new currMax
        if (product > currMax) { currMax = product; }
    }

}

