#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

int count(int in, int bor) {
	int total = in;
	in = in - bor;
	if (in == 0) {
		return total;
	}
	if (in % 3 == 2 && (in + 1) / 3 >= 1) {
		return total + count((in / 3) + 1, 1);
	}
	else if (in % 3 == 1 && (in + 2) / 3 >= 2) {
		return total + count((in / 3) + 1, 2);
	}
	else {
		return total + count((in / 3), 0);
	}
	return total;

}

int main() {
	int in, out;
	while (cin >> in) {
		cout << count(in, 0) << endl;
		//close form
		//cout << ceil(((float)in * 3 - 1) / 2) << endl;
	}
	return 0;
}
