#include<bits/stdc++.h>
using namespace std;

int na[1005], nb[1005];	 //����a �� ������b
string add(string a, string b) {
	int lena = a.size(), lenb = b.size();
	for(int i = 0; i < lena; i++)
		na[lena - 1 - i] = a[i] - '0';   //���ַ�ת�����֣�Ȼ��ת��ʹna[0]�����λ
	for(int i = 0; i < lenb; i++)
		nb[lenb - 1 - i] = b[i] - '0';
	int lmax = lena > lenb ? lena : lenb;
	for(int i = 0; i < lmax; i++) {
		na[i] += nb[i];
		na[i + 1] += na[i] / 10;	 	//�����λ
		na[i] %= 10;
	}
	if(na[lmax])
		lmax++;  		 //�����λ��Ӻ�Ҳ�н�λ�����ֳ��ȼ�1
	string ans;
	for(int i = lmax - 1; i >= 0; i--)  //������ת���ַ���Ȼ��ת
        ans += na[i]+'0';
	return ans;
}

int main() {
	string a, b;
	cin>>a;
	cin>>b;
	cout<<add(a, b);
	return 0;
}
