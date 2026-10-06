#include <iostream>
using namespace std;
int main() {
	unsigned int n;
	unsigned long long a[65536];
	unsigned long long x;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	cin >> x;

	for (int i = x + 1; i <= n; i++){
		a[i - 1] = a[i];
	}
	n--;
	for (int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}