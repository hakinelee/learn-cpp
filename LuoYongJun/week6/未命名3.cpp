#include<bits/stdc++.h>
using namespace std;
// �߾��ȳ˷� 
// 1.�ַ������� 
// 2.�ַ���ת���� 
// 3.��ʽ�˷� 
// 4.��ǰ��0 
// 5.������� 
int na[1005], nb[1005], nc[1000005];
string test1(string a, string b) {
	if(a == "0" || b == "0") {
		return "0";
	}
	int lena = a.size(), lenb = b.size();
	for(int i=0; i<lena; i++)
		na[lena-i] = a[i] - '0';
	for(int i=0; i<lenb; i++)
		nb[lenb-i] = b[i] - '0';
	
	// ��ʽ�˷� 
	for(int i=1; i<=lena; i++) {
		for(int j=1; j<=lenb; j++) {
			nc[i+j-1] = nc[i+j-1] + na[i] * nb[j];
		}
	}
	
	// �����λ 
	for(int i=1; i <= lena+lenb; i++) {
		nc[i+1] += nc[i]/10;
		nc[i] %= 10;
	}
	
	string ans;
	// ��ǰ��0 
	if(nc[lena+lenb])
		ans += nc[lena+lenb]+'0';
	for(int i = lena+lenb-1; i >= 1; i--) 
		ans += nc[i]+'0';
	return ans;
}
int main() {
	string x,y;
	cin>>x;
	cin>>y;
	cout<<test1(x, y);
	return 0;
}
