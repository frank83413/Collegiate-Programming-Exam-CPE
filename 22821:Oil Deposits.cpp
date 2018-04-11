#include <iostream>
#include <vector>
using namespace std;

void dfs(bool oil[100][100],int indexi,int indexj) {
	if (indexi > 0) {
		if (oil[indexi - 1][indexj - 1]) {
			oil[indexi - 1][indexj - 1] = false;
			dfs(oil, indexi - 1, indexj - 1);
		}
		if (oil[indexi - 1][indexj]) {
			oil[indexi - 1][indexj] = false;
			dfs(oil, indexi - 1, indexj);
		}
		if (oil[indexi - 1][indexj + 1]) {
			oil[indexi - 1][indexj + 1] = false;
			dfs(oil, indexi - 1, indexj + 1);
		}
	}
	if (oil[indexi][indexj - 1]) {
		oil[indexi][indexj - 1] = false;
		dfs(oil, indexi, indexj-1);
	}
	if (oil[indexi][indexj + 1]) {
		oil[indexi][indexj + 1] = false;
		dfs(oil, indexi, indexj + 1);
	}
	if (oil[indexi + 1][indexj - 1]) {
		oil[indexi + 1][indexj - 1] = false;
		dfs(oil, indexi + 1, indexj - 1);
	}
	if (oil[indexi + 1][indexj]) {
		oil[indexi + 1][indexj] = false;
		dfs(oil, indexi + 1, indexj);
	}
	if (oil[indexi + 1][indexj+1]) {
		oil[indexi + 1][indexj + 1] = false;
		dfs(oil, indexi + 1, indexj + 1);
	}
}

int main()
{
	int r, c;
	char in;
	bool oil[100][100];
	int count;
	while (true) {
		cin >> r >> c;
		if (r == 0 || c == 0)break;
		count = 0;
		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++) {
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
