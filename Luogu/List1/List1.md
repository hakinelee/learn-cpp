# List1——顺序结构（刷题记录）



## P5704 [字母转换](https://www.luogu.com.cn/problem/P5704)

#### 我的解法：

```cpp
#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    char c;
    cin >> c;
    c = c - 'a' + 'A';
    cout << c << endl;
    return 0;
}
```



## P5706 [再分肥宅水](https://www.luogu.com.cn/problem/P5706)

#### 我的解法：

```cpp
#include<bits/stdc++.h>
using namespace std;

int main() {
    double t;
    int n;
    scanf("%lf%d", &t, &n);
    printf("%.3f\n%d", t / n, 2 * n);
    return 0;
}
```



## 10. P5708 [三角形面积](https://www.luogu.com.cn/problem/P5708)

#### 我的解法：

```cpp
#include<bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("%.1f", s);
    return 0;
}
```



#### 常用 $cmath$ 头文件整理：

| 函数原型                                   | 样例           | 说明                       |
| ------------------------------------------ | -------------- | -------------------------- |
| double sin (double x)  | sin(3.14159/2) |三角函数正弦，x是弧度|
|double cos (double x) | cos(3.14159/2) | 三角函数余弦，x是弧度 |
| double exp (double x) | exp(1) | 返回 $e^{x}$ ，其中e是自然常数 |
| double log (double x) | log(10) | 返回 x 的自然对数 |
| double pow (double x, double y) | pow(3, 2) | 返回 $x^{y}$，也可以用来运算多次根式 |
|double sqrt (double x) | sqrt (9) | 返回 $\sqrt{x}$ |
| double fabs (double x) | fabs(-10) | 返回 x 的绝对值 |
| double ceil (double x) | ceil(2.1) | 返回大于或等于x的最小的整数值(上取整) |
| double floor (double x) | floor(2.9) | 返回小于或等于x的最大的整数值(下取整) |

#### 常见数据类型：

| 数据类型 | 占用空间 | 取值范围 |
| ------------------------------------------ | -------------- | -------------------------- |
| char | 1字节，8位 | $-128 \sim 127$ |
| int | 4字节，32位 | $-2^{31} \sim 2^{31}-1$ ,大约能够表示绝对值不超过 $2.1  \times 10^{9}$ 的整数 |
| unsigned int | 4字节，32位 | $0 \sim 2^{32}-1$，大约能够表示不超过 $4.2 \times 10^{9}$ 的非负整数 |
| long long |8字节，64位 | $-2^{63} \sim 2^{63}-1$，大约能够表示绝对值不超过 $9.2 \times 10^{18}$ 的整数 |
| unsigned long long | 8字节，64位 | $-2^{63} \sim 2^{63}-1$，大约能够表示不超过 $1.8 \times 10^{19}$ 的非负整数 |
| float | 4字节，32位 | 大约指数绝对值不超过37，6位有效数字 |
| double | 8字节，64位 | 大约指数绝对值不超过307，15位有效数字 |

