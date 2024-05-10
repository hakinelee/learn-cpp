#include<bits/stdc++.h>
using namespace std;

int na[1005], nb[1005];	 //加数a 和 被加数b
string add(string a, string b) {
	int lena = a.size(), lenb = b.size();
	for(int i = 0; i < lena; i++)
		na[lena - 1 - i] = a[i] - '0';   //把字符转成数字，然后翻转，使na[0]是最低位
	for(int i = 0; i < lenb; i++)
		nb[lenb - 1 - i] = b[i] - '0';
	int lmax = lena > lenb ? lena : lenb;
	for(int i = 0; i < lmax; i++) {
		na[i] += nb[i];
		na[i + 1] += na[i] / 10;	 	//处理进位
		na[i] %= 10;
	}
	if(na[lmax])
		lmax++;  		 //若最高位相加后也有进位，数字长度加1
	string ans;
	for(int i = lmax - 1; i >= 0; i--)  //把数字转成字符，然后翻转
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
