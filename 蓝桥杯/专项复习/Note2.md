# 结构体



1. `sort()` ：排序

  **P3955 [NOIP2017 普及组] 图书管理员**

   ```cpp
   const int N = 1010;
   int n, q, a[N];
   void check(int len, int qiu) {
   	int temp = pow(10, len);
   	for(int i = 1; i <= n; ++i) {
   		if(a[i] % temp == qiu) {
   			cout << a[i] << endl;
   			return ;
   		}
   	}
   	cout << -1 << endl;
   	return ;
   }
   int main() {
   	cin >> n >> q;
   	for(int i = 1; i <= n; ++i)
   		cin >> a[i];
   	sort(a + 1, a + n + 1);
   	for(int i = 1; i <= q; ++i) {
   		int len, qiu;
   		cin >> len >> qiu;
   		check(len, qiu);
   	}
   	return 0;
   }
   ```


  ​

  **P5740 【深基7.例9】最厉害的学生**

  ```cpp
  const int N = 1005;
  struct Node {
  	string name;
  	int chin, math, eng, sum;
  	int idx;
  } a[N];

  bool cmp(Node x, Node y) {
  	if(x.sum != y.sum)
  		return x.sum > y.sum;
  	else
  		return x.idx < y.idx;
  }

  int main() {	
  	int n;
  	cin >> n;
  	for(int i = 1; i <= n; ++i) {
  		cin >> a[i].name;
  		cin >> a[i].chin >> a[i].math >> a[i].eng;
  		a[i].sum = a[i].chin + a[i].math + a[i].eng;
  		a[i].idx = i;
  	}
  	sort(a + 1, a + n + 1, cmp);
  	cout << a[1].name << " " << a[1].chin << " " << a[1].math << " " << a[1].eng;
  	return 0;
  }
  ```



**P1093 [NOIP2007 普及组] 奖学金**

  ```cpp
const int N = 305;
struct Node {
	int chin, math, eng, sum;
	int idx;
} a[N];

bool cmp(Node x, Node y) {
	if(x.sum != y.sum)
		return x.sum > y.sum;
	else if(x.chin != y.chin)
		return x.chin > y.chin;
	else
		return x.idx < y.idx;
}

int main() {
	int n;
	cin >> n; 
	for(int i = 1; i <= n; ++i) {
		cin >> a[i].chin >> a[i].math >> a[i].eng;
		a[i].idx = i;
		a[i].sum = a[i].chin + a[i].math + a[i].eng;
	}
	sort(a + 1, a + n + 1, cmp);
	for(int i = 1; i <= 5; ++i)
		cout << a[i].idx << " " << a[i].sum << endl;
	return 0;
}
  ```

 

# P8665 [蓝桥杯 2018 省 A] 航班时间

```cpp
int f() {
    int h1, m1, s1, h2, m2, s2, d = 0;
    scanf("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
    if(getchar() == ' ') {
        scanf("(+%d)", &d);
    }
    return (d * 86400 + h2 * 3600 + m2 * 60 + s2) - (h1 * 3600 + m1 * 60 + s1);
}
 
int main() {
	int t;
    scanf("%d", &t);
    while(t--) {
        int ans = (f() + f()) / 2;
        printf("%02d:%02d:%02d\n", ans / 3600, ans % 3600 / 60, ans % 60);
    }
    return 0;
}
```



# P8598 [蓝桥杯 2013 省 AB] 错误票据

**方案1：**通过1个样例，另一个样例超时。

```cpp
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int n, x, a[105], ans1, ans2, mina = N, maxa = 0;
int main() {
	cin >> n;
	while(cin >> x) {
		a[x]++;
		if(x > maxa)
			maxa = x;
		if(x < mina)
			mina = x;
	}
	
	for(int i = mina; i <= maxa; i++) {
		if(a[i] == 0) {
			ans1= i;
			break;
		}
	}
    
	for(int i = mina; i <= maxa; i++) {
		if(a[i] == 2) {
			ans2 = i;
			break;
		}
	}
    
	cout << ans1 << " " << ans2 << endl; 
	return 0;
}
```

**优化思路**：先进行排序，遍历数组，找 **相邻两项相等** 的数和 **相邻两项差值大于1** 的数。

```cpp
const int N = 10005;
int n, a[N], cnt, ans1, ans2;
int main() {
    cin >> n;
    while(cin >> a[cnt]) 
		cnt++;
    sort(a, a + cnt);
    
    for(int i = 0; i < cnt; i++) {
        if(a[i] == a[i + 1]) 
			ans2 = a[i];
        if(a[i + 1] - a[i] > 1) 
			ans1 =  a[i] + 1;
    }
    cout << ans1 << " " << ans2 <<endl;
    return 0;
}
```

