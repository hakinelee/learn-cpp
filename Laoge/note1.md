# 考场技巧总结

1. 时间分配；
   1. 浏览题面制定具体分配规划的用时。总体浏览全部试题，大概把握该试题难度。简单筛选简单题、暴力题目、难题等。
   2. 预计得满分或者较高部分分的题目用时。
   3. 打暴力的题目用时。
   4. 得分检查（手搓数据、对拍）。
2. 精力分配；
3. 容错分配；



#对拍

用途：

1. 过了样例没法 $AC$ ，过了部分样例没法全部 $AC$ 
2. 在 $OI$ 赛制等不支持实时提交的赛制下，在时间充裕时用来检验程序的重要性。



对拍的结果是：

1. 告知程序在一定数据范围、数据分布内的正确性；
2. 告知程序有误，并给出一组错误数据。



**对拍程序：**

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t = 0;
	while (true) {
		cout << "test：" << t++ << endl;
		system("data.exe > data.in");
		system("std.exe < data.in > std.out");
		system("solve.exe < data.in > solve.out");
		if (system("fc std.out solve.out > diff.log")) {
			cout << "WA\n";
			break;  
		}
		cout << "AC\n";
	}
}
```



**测试数据：**

```cpp
#include<bits/stdc++.h>
using namespace std;

/**
 * mt19937 类名(C++11以上)
 * rd 变量名 
 * 构造函数参数 time(0)
 */
mt19937 rd(time(0));

int main() {
	uniform_int_distribution<int> range(1, 10);
	for(int i = 0; i < 10; ++i)	
		cout << range(rd) << endl;
	return 0;
}
```

```cpp
#include<bits/stdc++.h>
using namespace std;

int main() {
	srand(time(0));
	int x, y;
	x = rand() % 100;	// 0 - 99
	y = rand() % 100;
	cout << x << " " << y << endl;
}
```



