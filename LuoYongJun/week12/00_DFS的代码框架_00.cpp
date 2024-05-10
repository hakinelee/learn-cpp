#include<bits/stdc++.h>
using namespace std;

ans;                              //答案，常常用全局变量表示
void dfs(层数，其他参数) {
    if (到达目的地、或者出局) {   //到达最底层，或者满足条件退出 
        更新答案ans;              //答案一般用全局变量表示，ans是最优解
        return;                   //递归返回，即返回到上一层
    }
    (剪枝)                        //在进一步DFS之前剪枝
    for (用i遍历下一层所有可能的情况)    //对每一个情况继续DFS 
        if (used[i] == 0) {        //如果状态i没有处理过，就可以进入下一层dfs
            used[i] = 1;           //标记状态i为已经使用，在后续dfs时不能再使用
            dfs(层数+1，其他参数);      //下一层，即搜小规模后继续dfs
            used[i] = 0;           //恢复状态i，回溯时，不影响上一层对这个状态的使用
        }
    return;                        //返回到上一层
}

int main() {
	
	return 0;
}
