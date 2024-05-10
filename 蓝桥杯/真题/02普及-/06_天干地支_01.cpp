#include<bits/stdc++.h>
using namespace std;

string t[10] = {"geng", "xin", "ren", "gui", "jia", "yi", "bing", "ding", "wu", "ji"};
string d[12] = {"shen", "you", "xu", "hai", "zi", "chou", "yin", "mao", "chen", "si", "wu", "wei"};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;	
	cin >> n;
    cout << t[n % 10] << d[n % 12] << endl;	// 2020
	return 0;
}
