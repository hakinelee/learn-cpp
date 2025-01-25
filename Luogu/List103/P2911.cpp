#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int s1, s2, s3, temp = 0;
    int a[85] = {0};
    cin >> s1 >> s2 >> s3;
    for(int i = 1; i <= s1; ++i) {
        for(int j = 1; j <= s2; ++j) {
            for(int k = 1; k <= s3; ++k) {
                a[i + j + k]++;
                if(a[i + j + k]> temp)
                    temp = a[i + j + k];
            }
        }
    }

    for(int i = 1; i <= s1 + s2 + s3; ++i) {
        if(a[i] == temp) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
