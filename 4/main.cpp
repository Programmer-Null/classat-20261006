#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
	//
	// 变量定义
	//
	//评委数
	unsigned short n;
	short min = -1, max = 11, sum = 0, temp = 0;

	//
	// 输入数据和处理
	//
	cin >> n;
	for (int i = 0; i <= n; i++) {
		cin >> temp;
		if (temp > max) max = temp;
		if (temp < min) min = temp;
		sum += temp;
	}
	
	//
	// 处理
	//
	float result = 1.0*(sum - max - min) / (n / 2);
	cout << round(result*100)/100 << endl;
}
//陈泓帆