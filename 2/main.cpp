//Programmer-Null
#include <iostream>
using namespace std;
int main() {
	unsigned long long n, x;
	unsigned long long a[65536];
	unsigned long long tmp;
	bool flag;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	cin >> x;

	for (int i = 1; i <= n; i++){
		if (a[i] == x) {
			tmp = i;
			flag = true;
			break;
		}
	}

	if (!flag) {
		cout << "Not Found!" << endl;
		return 0xFFFFFFFF;
	}

	for (int i = tmp + 1; i <= n; i++){
		a[i - 1] = a[i];
	}
	n--;
	for (int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}