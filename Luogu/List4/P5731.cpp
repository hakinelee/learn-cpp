#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, a[12][12] = {0};
int x = 1, y = 1, f = 0;
// 方向数组：右、下、左、上（要按顺序）
int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

bool isValid(int x,int y) {//判断是否合法：不越界且这个地方没有人
    return x>=1 && x<=n && y>=1 && y<=n && !a[x][y];
}

int main() {
    scanf("%d", &n);
    for(int i = 1; i <= n * n; ++i) {
        a[x][y] = i;
        if(i == n * n)
            break;
        if(!isValid(x + dir[f][0], y + dir[f][1]))
            f = (f + 1) % 4;    //换一个方向，要 %4 不能超过dir的范围
        x += dir[f][0];
        y += dir[f][1];
    }
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j)
            printf("%3d", a[i][j]);
        cout << endl;
    }
    cout << endl;
    return 0;
}
