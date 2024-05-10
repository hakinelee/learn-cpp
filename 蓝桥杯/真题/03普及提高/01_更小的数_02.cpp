#include<bits/stdc++.h>
using namespace std;

const int N = 5010;
int dp[N][N]; //ȫ�����飬��ʼ��Ϊ0

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	string s; cin >> s;
	int ans = 0;
	for(int k = 1; k < s.size(); ++k) {				// ��k�� ���� , k = j - 1 
		for(int i = 0; i + k < s.size(); ++i) {		// �ִ�ͷ s[i], ���� k 
			int j = i + k; 
			if(s[i] > s[j])
				dp[i][j] = 1;
			if(s[i] < s[j])
				dp[i][j] = 0;
			if(s[i] == s[j])
				dp[i][j] = dp[i + 1][j - 1];
			if(dp[i][j] == 1)
				ans++;
		}
	}
	cout << ans;
	return 0;
}
