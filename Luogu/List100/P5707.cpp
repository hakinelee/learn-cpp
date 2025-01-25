#include<bits/stdc++.h>
using namespace std;

const int CLK = 24;  // 24小时制
const int loH = 8;  // 到校小时上限
const int loM = 0;  // 到校分钟上限
const int EXT = 10;  // 额外消耗分钟数

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s, v;
    cin >> s >> v;
    int costM = ceil(1.0 * s / v) + EXT;
    int costH = ceil(1.0 * costM / 60);
    costM %= 60;  // 保留60进制下的分钟部分
    printf("%02d:%02d", (loH - costH + CLK) % CLK, (loM - costM + 60) % 60);
    return 0;
}
