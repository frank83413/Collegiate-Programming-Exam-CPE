#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int re(int a) {
	int rea = 0;
	while (a>0) {
		rea = rea * 10 + a % 10;
		a = a / 10;
	}
	return rea;
}
int main() {
	int num;
	int in;
	int rein;
	int count = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> in;	
		count = 0;
		while (true) {
			count++;
			rein = re(in);
			in = in + rein;
			if (in == re(in)) {
				break;
			}
		}
		cout << count << " " << in << endl;
	}	
	return 0;
}
