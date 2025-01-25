#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void removeZeros(string& s, int start, int end) {
    int i = start, j = end - 1;
    while (i <= j && s[i] == '0')
        i++;
    while (i <= j && s[j] == '0')
        j--;
    if (i > start)
        s.erase(start, i - start);
    if (j < end - 1)
        s.erase(j + 1, end - j - 1);
}

void reverseStr(string& s, int start, int end) {
    reverse(s.begin() + start, s.begin() + end);
    removeZeros(s, start, end);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;
    int len = s.size();

    if (s.find('.') != -1) {
        int idx = s.find('.');
        reverseStr(s, 0, idx);
        reverseStr(s, idx, 2);
    } else if (s.find('/') != -1) {
        int idx = s.find('/');
        string numerator = s.substr(0, idx);
        string denominator = s.substr(idx + 1);
        reverseStr(numerator, 0, numerator.size());
        reverseStr(denominator, 0, denominator.size());
        s = numerator + "/" + denominator;
    } else if (s.find('%') != -1) {
        reverseStr(s, 0, len - 1);
    } else {
        reverseStr(s, 0, len);
    }

    cout << s << endl;
    return 0;
}
