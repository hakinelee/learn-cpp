#include<bits/stdc++.h>
using namespace std;

// int a[10000000];
int na[1005], nb[1005];
// �߾��ȼӷ� 
string add(string a, string b) {
	int lena = a.size(), lenb = b.size();	//  a,b�ĳ���
	for(int i=0; i<lena; i++)
		na[lena-1-i] = a[i] - '0';	//�ַ���תΪ���֣�Ȼ��ת
	for(int i=0; i<lenb; i++)
		nb[lenb-1-i] = b[i] - '0';

	int lmax = lena>lenb ? lena: lenb;

	for(int i=0; i<lmax; i++) {
		na[i] += nb[i];
		na[i+1] += na[i]/10;
		na[i] %= 10;
	}
	if(na[lmax]) {
		lmax++;
	}
	string ans;	// �ַ���ans��Ž��
	for(int i=lmax-1; i>=0;i--) {
		ans += na[i] + '0';
	} 
	return ans;
}

int main() {
	string a = "724", b = "881";
	cout<<add(a, b);
	return 0;
}