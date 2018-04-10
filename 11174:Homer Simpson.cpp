#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
	int m,n,t;
	while (cin >> m >> n >> t) {
		if (n < m) {
			int temp = m;
			m = n;
			n = temp;
		}
		int now = t / m;
		int out = now;
		int beer = t%m;
		while (beer!=0&&now>0) {
			now--;
			int tempt=t - m*now;
			if (tempt%n < beer) {
				beer = tempt%n;
				out=now+tempt/n;
			}
		}
		if(beer!=0)cout << out << " " << beer << endl;
		else cout << out << endl;
	}
	
	return 0;
}
