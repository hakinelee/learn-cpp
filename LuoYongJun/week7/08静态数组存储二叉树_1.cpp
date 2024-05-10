#include<bits/stdc++.h>
using namespace std;
// 静态数组存储二叉树
const int N = 100;	// 注意const不能少

struct Node {		// 定义静态二叉树结构体
	char v;
	int ls, rs;
} tree[N];

/**
 * 1. 首先打印根节点A；
 * 2. 然后搜左孩子，是B，打印出来；
 * 3. 继续搜B的左孩子，是D，打印出来；
 * 4. D没有孩子，回到B，B发现也没有右孩子，继续回到A；
 * 5. A有右孩子C，打印出来；
 * 6. 打印C的左右孩子E、F。
 * 这个递归函数执行的步骤称为"先序遍历"，先输出父节点，然后再搜左右孩子并输出。
 * 除此之外，还有 "中序遍历" 和 "后序遍历" 
 */
void print_tree(int u) {	   // 打印二叉树
	if(u) {
		cout<<tree[u].v<<' ';     // 打印节点u的值
        print_tree(tree[u].ls);   // 继续搜左孩子
        print_tree(tree[u].rs);   // 继续搜右孩子
	}
}

int main() {
	tree[5].v='A'; tree[5].ls=7; tree[5].rs=3;
    tree[7].v='B'; tree[7].ls=2; tree[7].rs=0;
    tree[3].v='C'; tree[3].ls=9; tree[3].rs=6;
    tree[2].v='D';  // tree[2].ls=0; tree[2].rs=0; 可以不写，因为tree[]是全局变量，已初始化为0
    tree[9].v='E';  // tree[9].ls=0; tree[9].rs=0; 可以不写
    tree[6].v='F';  // tree[6].ls=0; tree[6].rs=0; 可以不写
    int root = 5;   // 根是tree[5]
    print_tree(5);  // 输出： A B D C E F
	return 0;
}
