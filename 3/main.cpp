#include <iostream>
using namespace std;
int main() {
	int m, n, id=-1, a[105];
	cin >> m;
	for (int i = 1; i <= m; i++) {
		cin >> a[i];
	}
	cin >> n;
	for (int i = 1; i <= n; i++){
		if (a[i] == n){
			id = i;
			break;
		}
	}
	cout << id << endl;
}