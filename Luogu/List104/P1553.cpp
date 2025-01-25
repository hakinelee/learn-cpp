#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

string reStr(string s, bool isDecimalPart = false) {
    reverse(s.begin(), s.end());
    // 去除前导0
    while (!s.empty() && s.front() == '0') {
        s.erase(s.begin());
    }
    // 去除后导0
    if (isDecimalPart) {
        while (!s.empty() && s.back() == '0') {
            s.pop_back();
        }
        if (s.empty()) {
            s = "0";
        }
    }
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;

    if (s.back() == '%') {
        string numPart = s.substr(0, s.size() - 1);
        string reNum = reStr(numPart);
        if (reNum.empty())
            reNum = "0";
        cout << reNum << "%" << endl;
    }

    else if (s.find('/') != -1) {
        int idx = s.find('/');
        string num1 = s.substr(0, idx);
        string num2 = s.substr(idx + 1);
        string reNum1 = reStr(num1);
        string reNum2 = reStr(num2);
        if (reNum1.empty())
            reNum1 = "0";
        if (reNum2.empty())
            reNum2 = "0";
        cout << reNum1 << "/" << reNum2 << endl;
    }

    else if (s.find('.') != -1) {
        int idx = s.find('.');
        string num1 = s.substr(0, idx);
        string num2 = s.substr(idx + 1);
        string reNum1 = reStr(num1);
        string reNum2 = reStr(num2, true);
        if (reNum1.empty())
            reNum1 = "0";
        if (reNum2.empty())
            reNum2 = "0";
        cout << reNum1 << "." << reNum2 << endl;
    }

    else {
        string reNum1 = reStr(s);
        if (reNum1.empty())
            cout << 0 << endl;
        else
            cout << reNum1 << endl;
    }
    return 0;
}
