# List3 --- 循环结构



## P5718 [找最小值](https://www.luogu.com.cn/problem/P5718)





# P5719 【深基4.例3】分类平均

```cpp
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    int n, k, cntA = 0, cntB = 0;
    ll sumA = 0, sumB = 0;
    double aveA = 0, aveB = 0;
    cin >> n >> k;
    for(int i = 1; i <= n; i++) {
        if(i % k == 0) {
            sumA += i;
            cntA++;
        }
        else {
            sumB += i;
            cntB++;
        }
    }
    aveA = sumA * 1.0 / cntA;
    aveB = sumB * 1.0 / cntB;
    printf("%.1f %.1f", aveA, aveB);
    return 0;
}
```



# P5721 【深基4.例6】数字直角三角形

```cpp
#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, idx = 1;
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n - i + 1; ++j) {
            cout << setfill('0') << setw(2) << idx;
            idx++;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
```

