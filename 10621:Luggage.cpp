#include <vector>
#include <string>
#include <stack>
#include <iostream>
#include <sstream>
#include <iterator>

using namespace std;


int main() {
	int num;
	int sum = 0;
	char chararray[100];
	bool dp[5000];
	vector<int> invector;
	cin >> num;
	cin.getline(chararray, 100);
	for (int i = 0; i < num; i++) {		
		cin.getline(chararray, 100);
		sum = 0;
		invector.clear();
		for (int j = 0; j < 100; j++) {
			if (chararray[j] == ' ') {
				invector.push_back(sum);
				sum = 0;
			}
			else if (chararray[j] == '\0') {
				invector.push_back(sum);
				sum = 0;
				break;
			}
			else {
				sum = sum * 10 + (chararray[j] - '0');
			}
		}
		sum = 0;
		for (int j = 0; j < invector.size(); j++) {
			sum += invector[j];
		}
		if (sum % 2 != 0) {
			cout << "NO" << endl;
			continue;
		}
		sum /= 2;
		for (int j = 0; j < 5000; j++) {
			dp[j] = false;
		}
		for (int j = 0; j < invector.size(); j++) {
			for (int k = sum; k>=0; k--) {
				if (k==invector[j] || dp[k - invector[j]]) {
					dp[k] = true;
				}
			}
		}
		if (dp[sum]) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
