#include<bits/stdc++.h>
using namespace std;
// ��̬����洢������
const int N = 100;	// ע��const������

struct Node {		// ���徲̬�������ṹ��
	char v;
	int ls, rs;
} tree[N];

/**
 * 1. ���ȴ�ӡ���ڵ�A��
 * 2. Ȼ�������ӣ���B����ӡ������
 * 3. ������B�����ӣ���D����ӡ������
 * 4. Dû�к��ӣ��ص�B��B����Ҳû���Һ��ӣ������ص�A��
 * 5. A���Һ���C����ӡ������
 * 6. ��ӡC�����Һ���E��F��
 * ����ݹ麯��ִ�еĲ����Ϊ"�������"����������ڵ㣬Ȼ���������Һ��Ӳ������
 * ����֮�⣬���� "�������" �� "�������" 
 */
void print_tree(int u) {	   // ��ӡ������
	if(u) {
		cout<<tree[u].v<<' ';     // ��ӡ�ڵ�u��ֵ
        print_tree(tree[u].ls);   // ����������
        print_tree(tree[u].rs);   // �������Һ���
	}
}

int main() {
	tree[5].v='A'; tree[5].ls=7; tree[5].rs=3;
    tree[7].v='B'; tree[7].ls=2; tree[7].rs=0;
    tree[3].v='C'; tree[3].ls=9; tree[3].rs=6;
    tree[2].v='D';  // tree[2].ls=0; tree[2].rs=0; ���Բ�д����Ϊtree[]��ȫ�ֱ������ѳ�ʼ��Ϊ0
    tree[9].v='E';  // tree[9].ls=0; tree[9].rs=0; ���Բ�д
    tree[6].v='F';  // tree[6].ls=0; tree[6].rs=0; ���Բ�д
    int root = 5;   // ����tree[5]
    print_tree(5);  // ����� A B D C E F
	return 0;
}
