#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;
    int a[3] = {0}, b[4] = {0};
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'b')
            a[0]++;
        if(s[i] == 'o')
            a[1]++;
        if(s[i] == 'y')
            a[2]++;

        if(s[i] == 'g')
            b[0]++;
        if(s[i] == 'i')
            b[1]++;
        if(s[i] == 'r')
            b[2]++;
        if(s[i] == 'l')
            b[3]++;
    }
    int ans1 = 0, ans2 = 0;
    for(int i = 0; i <= 2; i++) {
        if(ans1 < a[i])
            ans1 = a[i];
    }
    for(int i = 0; i <= 3; i++) {
        if(ans2 < b[i])
            ans2 = b[i];
    }
    cout << ans1 << endl << ans2 <<endl;
    return 0;
}
