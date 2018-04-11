#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int m, d;
	int num;
	int sd;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> m >> d;
		if (m == 1)sd = 6;
		if (m == 2)sd = 2;
		if (m == 3)sd = 2;
		if (m == 4)sd = 5;
		if (m == 5)sd = 7;
		if (m == 6)sd = 3;
		if (m == 7)sd = 5;
		if (m == 8)sd = 1;
		if (m == 9)sd = 4;
		if (m == 10)sd = 6;
		if (m == 11)sd = 2;
		if (m == 12)sd = 4;
		d=(sd + d - 1)%7;
		if (d == 1)cout << "Monday" << endl;
		if (d == 2)cout << "Tuesday" << endl;
		if (d == 3)cout << "Wednesday" << endl;
		if (d == 4)cout << "Thursday" << endl;
		if (d == 5)cout << "Friday" << endl;
		if (d == 6)cout << "Saturday" << endl;
		if (d == 0)cout << "Sunday" << endl;
	}
	return 0;
}
