#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    if(n * 5 < n * 3 + 11)
        cout << "Local" << endl;
    else
        cout << "Luogu" << endl;
    return 0;
}
