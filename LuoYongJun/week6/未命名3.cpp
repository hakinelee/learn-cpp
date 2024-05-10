#include<bits/stdc++.h>
using namespace std;
// 高精度乘法 
// 1.字符串读入 
// 2.字符串转数组 
// 3.竖式乘法 
// 4.消前导0 
// 5.倒序输出 
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
	
	// 竖式乘法 
	for(int i=1; i<=lena; i++) {
		for(int j=1; j<=lenb; j++) {
			nc[i+j-1] = nc[i+j-1] + na[i] * nb[j];
		}
	}
	
	// 处理进位 
	for(int i=1; i <= lena+lenb; i++) {
		nc[i+1] += nc[i]/10;
		nc[i] %= 10;
	}
	
	string ans;
	// 消前导0 
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
