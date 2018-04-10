#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
	int in;	
	int x1, y1, x2, y2, x3, y3, x4, y4,sx1,sy1,sx2,sy2;
	int r1, r2,wr1,wr2,sr,ur;
	vector<int> sortx, sorty;
	while (cin >> in) {
		for (int i = 0; i < in; i++) {
			cin >> x1 >> y1 >> x2 >> y2;
			cin >> x3 >> y3 >> x4 >> y4;
			if (x3 > x2 || x1 > x4 || y3 > y2 || y1 > y4) {
				r1 = (x2 - x1)*(y2 - y1);
				r2 = (x4 - x3)*(y4 - y3);
				sr = 0;
				cout << "Night " << i + 1 << ": " << sr << " " << r1 + r2 << " " << 10000-r1-r2 << endl;
				continue;
			}
			r1 = (x2 - x1)*(y2 - y1);
			r2 = (x4 - x3)*(y4 - y3);
			sortx.clear();
			sorty.clear();
			sortx.push_back(x1);
			sortx.push_back(x2);
			sortx.push_back(x3);
			sortx.push_back(x4);
			sorty.push_back(y1);
			sorty.push_back(y2);
			sorty.push_back(y3);
			sorty.push_back(y4);
			sort(sortx.begin(), sortx.end());
			sort(sorty.begin(), sorty.end());

			sx1 = sortx[1];
			sx2 = sortx[2];
			sy1 = sorty[1];
			sy2 = sorty[2];
			sr= (sx2 - sx1)*(sy2 - sy1);
			wr1 = r1 - sr;
			wr2 = r2 - sr;
			ur = 10000 - wr1 - wr2 - sr;
			cout << "Night " << i + 1 << ": "<<sr<<" "<<wr1+wr2<<" "<<ur<<endl;
		}
	}
	return 0;
}
