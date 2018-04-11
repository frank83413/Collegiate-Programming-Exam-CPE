#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, k;
	int sum;
	int l;
	while (cin >> n >> k) {
		sum = n;
		while (true) {
			l = n%k;
			n = n / k;
			sum += n;
			if (n == 0) {
				cout << sum << endl;
				break;
			}
			n += l;			
		}
	}	
	return 0;
}
