#include<bits/stdc++.h>
using namespace std;
int n;
int vis[10];    // 访问标记
int a[10];      //需要做全排列的数组
int b[10];      //当前DFS得到的全排列
void dfs(int step) {
    if (step == n+1) {     //已经对n个数做了全排列，输出全排列
        for (int i=1; i<=n; i++)
            printf("%5d",b[i]);
        printf("\n");
        return;            //结束，不再继续DFS
    }
    for (int i = 1; i <= n; i++) {    //遍历每个a[i]，放进全排列中
        if (vis[i] == 0) {   // 数字a[i]不在前面得到的排列中
            b[step] = a[i];  // 把a[i]放进排列
            vis[i] = 1;      // 保存现场：a[i]不能在后面继续用
            dfs(step+1);     // 继续把后面的数放进排列
            vis[i] = 0;      // 恢复现场：a[i]重新可以使用
        }
    }
    return;
}
int main() {
    cin >> n;
    for (int i=1; i<=n; i++)  a[i]=i;   //赋值得到n个数
    dfs(1);  //对a[1]~a[n]做全排列
    return 0;
}

