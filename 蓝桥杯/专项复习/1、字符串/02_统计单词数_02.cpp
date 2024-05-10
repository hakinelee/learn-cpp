#include<bits/stdc++.h> 
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str1, str2;
    getline(cin, str1);     // 防止忽略空格
    getline(cin, str2);

    for(int i = 0; i < str1.size(); ++i)
        str1[i] = toupper(str1[i]);
    for(int i = 0; i < str2.size(); ++i)
        str2[i] = toupper(str2[i]);

    // 把str1, str2前后加上空格
    str1 = ' ' + str1 + ' ';
    str2 = ' ' + str2 + ' ';
    if(str2.find(str1) == -1)
        cout << -1 << endl;
    else {
        int sum = 0;
        int st = str2.find(str1);
        int temp = st;
        while(temp != -1) {
            sum++;
            temp = str2.find(str1, temp + 1);
        }
        cout << sum << " " << st << endl;
    }
    return 0;
}
