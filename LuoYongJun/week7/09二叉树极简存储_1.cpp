#include <bits/stdc++.h>
using namespace std;
 
const int N = 100;          // ע��const������
char t[N];                  // �򵥵���һ�����鶨�������
int ls(int p) { 			// ��λ���ӣ�Ҳ����д�� p*2
	return p<<1;
}       
int rs(int p) {    			// ��λ�Һ��ӣ�Ҳ����д�� p*2+1
	return p<<1 | 1;
}
int main() {
    t[1]='A';  t[2]='B';  t[3]='C';
    t[4]='D';  t[5]='E';  t[6]='F';  t[7]='G';
    t[8]='H';  t[9]='I';  t[10]='J'; t[11]='K';
    cout<<t[1]<<":lson = "<<t[ls(1)]<<"; rson = "<<t[rs(1)]<<endl; //���  A:lson=B rson=C
    cout<<t[5]<<":lson = "<<t[ls(5)]<<"; rson = "<<t[rs(5)]<<endl; //���  E:lson=J rson=K
    return 0;
}

