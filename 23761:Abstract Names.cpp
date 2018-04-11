#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int n;
	char name[100];
	bool yes = true;
	bool namev1 = false, namev2 = false;
	string name1,name2;
	cin >> n;
	cin.getline(name,100);
	for (int i=0; i < n; i++) {
		cin.getline(name, 100);
		name1 = name;
		cin.getline(name, 100);
		name2 = name;
		if (name1.size() != name2.size()) {
			cout << "No" << endl;
			continue;
		}
		yes = true;
		for (int j = 0; j < name1.size(); j++) {
			if (name1[j] != name2[j]) {
				namev1 = false, namev2 = false;
				if (name1[j] == 'a' || name1[j] == 'e' || name1[j] == 'i' || name1[j] == 'o' || name1[j] == 'u') {
					namev1 = true;
				}
				if (name2[j] == 'a' || name2[j] == 'e' || name2[j] == 'i' || name2[j] == 'o' || name2[j] == 'u') {
					namev2 = true;
				}
				if (namev1&&namev2) {
					continue;
				}
				else {
					cout << "No" << endl;
					yes = false;
					break;
				}				
			}
		}
		if(yes)cout << "Yes" << endl;
	}
	return 0;
}
