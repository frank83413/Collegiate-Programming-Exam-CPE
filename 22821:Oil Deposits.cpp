#include <iostream>
#include <vector>
using namespace std;

void dfs(bool oil[101][101],int indexi,int indexj) {
	for (int i = -1; i <=1; i++) {
		for (int j = -1; j <= 1; j++) {
			if (indexi + i < 0 || indexj + j < 0) {
				continue;
			}
			if (oil[indexi +i][indexj +j]) {
				oil[indexi + i][indexj + j] = false;
				dfs(oil, indexi + i, indexj + j);
			}
		}
	}
}

int main()
{
	int r, c;
	char in;
	bool oil[101][101];
	int count;
	while (true) {
		cin >> r >> c;
		if (r == 0 || c == 0)break;
		count = 0;
		for (int i = 0; i < 101; i++) {
			for (int j = 0; j < 101; j++) {
				oil[i][j] = false;
			}
		}
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cin >> in;
				if(in=='@')oil[i][j] = true;
			}
		}
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				if (oil[i][j]) {
					count++;
					oil[i][j] = false;
					dfs(oil, i, j);
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}
