#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, temp, a[205][205], x = 1, y = 1;
bool flag = false;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    while(cin >> temp) {
        for(int i = 1; i <= temp; i++, y++) {
            if(flag)
                a[x][y] = 1;
            if(y == n) {
                x++;
                y = 0;
            }
        }
        flag = !flag;
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++)
            cout << a[i][j];
        cout << endl;
    }
    return 0;
}
