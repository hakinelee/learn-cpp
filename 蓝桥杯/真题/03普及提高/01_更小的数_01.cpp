#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string s; 
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        for (int j = i + 1; j < s.size(); j++) {
            string tmp = s;
            reverse(tmp.begin()+i, tmp.begin()+j+1);  //·´×ª×Ó´®s[i,j]
            if (tmp < s)  ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
