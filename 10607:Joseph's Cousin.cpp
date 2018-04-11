#include <iostream>
#include <vector>
using namespace std;

#define sizep 33000
//Thanks to Ming - Wei Niu
bool prime[sizep];
vector<int> getprime() {
	vector<int> P;
	prime[0] = false;
	prime[1] = false;
	prime[2] = true;
	for (int i = 3; i < sizep; i++) {
		if(i%2==0)prime[i] = false;
		else prime[i]= true;
	}
	for (int i = 0; i < sizep; i++) {
		if (prime[i]) {
			for (int j = i+1; j < sizep; j++) {
				if (j % i == 0) {
					prime[j] = false;
				}
			}
		}
	}
	for (int i = 0; i < sizep; i++) {
		if (prime[i]) {
			P.push_back(i);
		}
	}
	return P;
}

int main()
{
	int n = 3501;
	vector<int> perpare;
	vector<int> P;
	P = getprime();
	for (int i = 0; i < n; ++i)
	{
		perpare.push_back(i + 1);
	}
	int x;
	while (cin >> x)
	{
		if (x == 0) break;
		vector<int> test(perpare.begin(), perpare.begin() + x);
		int current = 0;
		for (int i = 0; i< x - 1; ++i)
		{
			int kill = current + P[i] - 1;
			int array_size = test.size();
			test.erase(test.begin() + (kill % array_size));

			current = kill % array_size;
		}
		cout << test[0] << '\n';
	}
	return 0;
}
