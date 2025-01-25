#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x;
    cin >> x;
    cout << "Today, I ate ";
    if(x == 0)
        cout << "0 apple." << endl;
    else if (x == 1)
        cout << "1 apple." << endl;
    else
        cout << x << " apples." << endl;
    return 0;
}
