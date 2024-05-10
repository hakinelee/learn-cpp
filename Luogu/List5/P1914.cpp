#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;
    for(int i = 0; i < s.size(); ++i) {
        // 先对 n 取模 26，确保循环回到 'a'
        int offset = (s[i] - 'a' + n) % 26;
        // 如果 offset 是负数（即原字符是 'z' 并且 n 很大），则加上 26
        if (offset < 0) offset += 26;
        // 加上 'a' 得到最终的字符
        s[i] = offset + 'a';
    }
    cout << s << endl;
    return 0;
}
