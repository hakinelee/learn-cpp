#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

const int N = 50;
int a[N][N], n, x, y;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    x = 1;
    y = (1 + n) / 2;
    a[x][y] = 1;
    for(int k = 2; k <= n * n; ++k) {
        if(x == 1 && y != n) {
            a[n][y + 1] = k;
            x = n;
            y += 1;
        }
        else if(x != 1 && y == n) {
            a[x - 1][1] = k;
            x -= 1;
            y = 1;
        }
        else if(x == 1 && y == n) {
            a[2][n] = k;
            x = 2;
        }
        else if(x != 1 && y != n) {
            if(a[x - 1][y + 1] == 0) {
                a[x - 1][y + 1] = k;
                x -= 1;
                y += 1;
            }
            else {
                a[x + 1][y] = k;
                x += 1;
            }
        }
    }

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j)
            cout << a[i][j] << " ";
        cout << endl;
    }
    cout << endl;
    return 0;
}
