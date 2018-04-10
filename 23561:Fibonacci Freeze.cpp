#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

#define size 110
long long int F[5001][size] = { 0 };
void Fibonacci(long long int F[5001][size]) {
	F[1][0] = 1;
	for (int i = 2; i < 5001; i++) {
		for (int j=0; j < size; j++) {
			F[i][j] += F[i - 1][j] + F[i - 2][j];
			if (F[i][j] > 10000000000) {
				F[i][j] -= 10000000000;
				F[i][j + 1]++;
			}
		}
	}
}

int main() {
	int in;	
	Fibonacci(F);
	while (cin >> in) {
		if (in == 0) {
			cout << "The Fibonacci number for 0 is 0" << endl;
			continue;
		}
		if (in == 1) {
			cout << "The Fibonacci number for 1 is 1" << endl;
			continue;
		}
		cout << "The Fibonacci number for " << in << " is ";
		int count = size-1;
		while (F[in][count] == 0) {
			count--;
		}
		cout << F[in][count];
		count--;
		for (int i= count;i>-1;i--)
		{
			cout << setw(10) << setfill('0') << F[in][i];
		}
		cout << endl;
	}
	return 0;
}
