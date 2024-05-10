#include<bits/stdc++.h>
using namespace std;

/**
 * mt19937 类名
 * rd 变量名 
 * 构造函数参数 time(0)
 */
mt19937 rd(time(0));

int main() {
	uniform_int_distribution<int> range(1, 10);
	for(int i = 0; i < 10; ++i)	
		cout << range(rd) << endl;
//	srand(time(0));
//	int x, y;
//	x = rand() % 100;	// 0 - 99
//	y = rand() % 100;
//	cout << x << " " << y << endl;
	return 0;
}
