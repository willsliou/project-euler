/* 
Wills Liou


Multiples of 3 and 5
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

Run:
g++ multiples_of_3_and_5.cpp
./a.out
233168
*/

#include <iostream>
#include <vector>
using std::cin;
using std::endl;
using std::cout;

int main() {
	const int MAX = 1000;
	int sum = 0;

	for (int i = 2; i < MAX; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;		
}
	}
	cout << sum << endl;
	return sum;
}
