#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

const int N = 105;
int n, a[N];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = 1; i <= n; i++) {
        int temp = 0;
        for(int j = i - 1; j >= 1; j--)
            if(a[j] < a[i])
                temp++;
        cout << temp << " ";
    }
    cout << endl;
    return 0;
}
