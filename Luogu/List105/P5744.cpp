#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

#define N 6
struct P5744 {
    string name;
    int age, score;
} a[N];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i].name >> a[i].age >> a[i].score;
    for(int i = 1; i <= n; i++) {
        cout << a[i].name << " " << a[i].age + 1 << " " ;
        if(a[i].score * 1.2 >= 600)
            cout << 600 << endl;
        else
            cout << a[i].score * 1.2 << endl;
    }
    return 0;
}
