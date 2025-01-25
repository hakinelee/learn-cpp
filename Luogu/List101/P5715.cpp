#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int a[3];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    for(int i = 0; i <= 2; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}
