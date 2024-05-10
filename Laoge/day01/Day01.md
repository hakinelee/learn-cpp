# Day01：时间/空间复杂度、二分



## 00 介绍

知识点（算法 + 数据结构）+ 刷题

刷题：[洛谷：能力全面提升综合题单](https://www.luogu.com.cn/training/9391)

书籍：

- 《深入浅出程序设计竞赛（基础篇）》（适合零基础/基础薄弱的同学）、
- 《算法竞赛入门经典》（入门难度较高）、
- 《算法竞赛进阶指南》（适合具有一定算法竞赛基础的同学）、
- 《算法竞赛（罗勇军）》（覆盖面广）、
- 《（信息学奥赛）数学一本通》（偏向数学方向）



### 如何提问与社交

- 提问：让自己的提问/发言看起来不冒犯到他人，让他人看着舒服
- BDFS (Bai Du first search)
- 发代码用云剪贴板，不要直接粘贴也不要发截图
- 其他人帮助你是用爱发电而不是义务
- 尽量减少让其他人帮助调试代码的行为，除非你已经经过很多努力，井且至少要能通过样例。
- 合理的提问不但是让其他人感觉舒适，也是为了让你的问题能够更好的被解答
- 社交：保持谦逊，保持善良
- 大多数大佬本质都是单纯善良的人，而且都有有趣的灵魂。他们很乐意分享，交流和帮助后辈
- 如果你遇到可以帮助的人而且你恰好有时间，请尽可能提供帮助。
- 总会有比你强很多的人，所以永远保持谦逊。




## 01 时间复杂度

$O(1)$ < $O(log  n)$ < $O(n)$ < $O(nlog n)$ < $O(n^2)$ < $O(n^3)$ < $O(2^n)$ < $O(n!)$ < $O(n^n)$



常见的阶在 `1s` 内能跑完的数据范围：($2*10^8$)

$2^{10} = 1024 <--> 10^3$

| 时间复杂度 |   数据规模   |
| :--------: | :----------: |
| $O(log n)$ |   $10^{10}$   |
|   $O(n)$   | $10^7-10^8$ |
| $O(nlogn)$ |    $10^6$    |
|$$O(n\sqrt{n})$$|$10^5$|
|  $O(n^2)$  | $8000-10000$ |
|  $O(n^3)$  |    $200$     |
|  $O(2^n)$  |     $20$     |
|  $O(3^n)$  |     $16$     |
|  $O(n!)$  |     $12$     |



## 02 空间复杂度

1个 int 占4个byte，long long 占8个。

500 MB == 1 * 10 ^ 8 个int

$500 * 1024 * 1024 / 4 = 1*10^8 $



## 03 二分算法

二分可以简单分为 `二分查找` 与 `二分答案`。



### 二分查找

**模版1：**尽量往左找目标

```cpp
while(l < r) {
    int mid = (l + r) / 2;	//l + r >> 1
    if (check(mid))      	// check()判断mid是否满足性质
        r = mid;
    else 
        l = mid + 1;
 }
```

**模版2：**尽量往右找目标

```cpp
while(l < r) {
    int mid = (l + r + 1) / 2;	//l + r + 1 >> 1
    if (check(mid))  
        l = mid;
    else 
        r = mid - 1;
}
```

**只要是往左找答案（最小），就用第一个模板，向下取整，mid不用加一，r=mid，l加一；**

**只要是往右找答案（最大），就用第二个模板，向上取整，mid要加一，l=mid，r要减一；**



**模板3：**（浮点二分）

```cpp
while(r - l > 1e-5) { //需要一个精度保证
	double mid = (l + r) / 2;
	if(check(mid)) 
        l = mid; //或r=mid;
	else 
        r = mid; //或l=mid;
}
```

浮点二分就相对简单多了，因为浮点除法不会取整，所以mid，l，r，都不用加1或减1.



#### 拓展：


- 非降序**可重**序列二分查找**下标最小 $\geq x$** 的元素下标

```cpp
int find(int x, int l, int r) {
    while(l < r) {
        int mid = (l + r) / 2;
        if(x <= a[mid])
            r = mid;
        else
            l = mid + 1;
	}
    return l;
}
```

- 非降序**可重**序列二分查找**下标最小 $>x$** 的元素下标

```cpp
int find(int x, int l, int r) {
    while(l < r) {
        int mid = (l + r) / 2;
        if(x < a[mid])
            r = mid;
        else
            l = mid + 1;
	}
    return l;
}
```



- 非降序**可重**序列二分查找**下标最大 $\leq x$** 的元素下标

```cpp
int find(int x, int l, int r) {
    while(l < r) {
        int mid = (l + r) / 2;
        if(a[mid + 1] <= x)
            l = mid + 1;
        else
            r = mid;
	}
    return l;
}
```

- 非降序**可重**序列二分查找**下标最大 $< x$** 的元素下标

```cpp
int find(int x, int l, int r) {
    while(l < r) {
        int mid = (l + r) / 2;
        if(a[mid + 1] < x)
        	l = mid + 1；
        else
            r = mid;
    }
    return l;
}
```



#### STL 的使用

STL中实现了`lower_bound` 和 `upper_bound` 实现上述功能，这两个函数默认在非降序条件下查找 **下标最小** 的 $\geq x$ 的元素下标 和 $>x$ 的元素下标。

用法：（在非降序序列a中查找$[1, n]$ 内的 下标最小的 $>=x$ / $ > x$ 的元素）

左闭右开$[l, r)$ ，所以使用时应注意范围是$[1,  n + 1]$

```cpp
// 一
vector<int> a(n);
int lo = lower_bound(a + 1, a ＋ n + 1, x) - a;
int hi = upper_bound(a + 1, a ＋ n + 1, x) - a;

// 二
vector<int> b(n);
int lo = lower_bound(b.begin(), b.end(), x) - b.begin();
int hi = upper_bound(b.begin(), b.end(), x) - b.begin();
```



**给定一个长度为n 的非降序序列a，求a中元素x出现的次数：** $O(log n)$

```cpp
// x出现的区间为：[x第一次出现的位置, 第一个 >x 的数出现的位置]
// x第一次出现的位置：lower_bound(a.begin(), b.end(), x);
// 第一个 >x 的数出现的位置：upper_bound(a.begin(), a.end(), x);
int cnt = upper_bound(a.begin(), a.end(), x) - lower_bound(a.begin(), b.end(), x);
```



**P1102 A-B 数对** 

题目大意：给出一串正整数数列以及一个正整数 $C$，要求计算出所有满足 $A−B=C$ 的数对的个数（不同位置的数字一样的数对算不同的数对）。

```cpp
#define ll long long
const int N = 2e5 + 10;
int n, c, a[N];
ll cnt;		// 所有统计点缀的题目注意是否要开long long
int main() {
    cin >> n >> c;
	for(int i = 1; i <= n; ++i)
		cin >> a[i];
	sort(a + 1, a + n + 1);
	
	for(int i = n; i > 0; i--) {
		int b = a[i] - c;
		int lo = lower_bound(a + 1, a + n + 1, b) - a;
		int hi = upper_bound(a + 1, a + n + 1, b) - a;
		cnt += hi - lo;
	}
	cout << cnt;
	return 0;
}
```



**P1918 保龄球**

题目大意：给定 $n$ 个位置的瓶子数（各个位置的瓶子数不同），发球 $q$ 次，每次击打 $m$ 个瓶子（刚好 $m$ 个瓶子，不能多），输出满足条件的位置，不满足输出 $0$ 。

思路：刚开始以为是裸二分查找，可后来发现 $sort$ 会打乱初始的位置，用 `结构体` + `sort` 才解决。

```cpp
const int N = 1e5 + 10;
int n, q, temp;
struct data {
	int g;	// 个数
	int w;	// 坐标 
} a[N];

bool cmp(data x, data y) {
	return x.g < y.g;
}

void bin_search(int x, int l, int r) {
	while(l < r) {
		int mid = (l + r) / 2;
		if(x <= a[mid].g)	
			r = mid;
		else
			l = mid + 1;
	}
	if(a[l].g == x)
		cout << a[l].w << endl;
	else
		cout << 0 << endl;
	return ;
}

int main() {
	cin >> n;
	for(int i = 1; i <= n; ++i) {
		cin >> a[i].g;
		a[i].w = i;
	}
	sort(a + 1, a + n + 1, cmp);
	cin >> q;
	for(int i = 1; i <= q; ++i) {
		cin >> temp;
		int l = 1, r = n;
		bin_search(temp, l, r);
	}
	return 0;
}
```

