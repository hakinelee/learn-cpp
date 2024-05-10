#include <bits/stdc++.h>
using namespace std;
// American Heritage
const int N = 30;
struct Node {
	char v, ls, rs;
} a[N];

void maketree(int x, int y) {
	
} 

void print(int u) {  // ºóĞò±éÀú´òÓ¡ 
	if(u) {
		print(a[u].ls);
		print(a[u].ls);
		cout<<a[u].v;
	}
}

int main() {
	string s1, s2;
	cin>>s1>>s2;
	int len = s1.size();
	
	return 0;
}
