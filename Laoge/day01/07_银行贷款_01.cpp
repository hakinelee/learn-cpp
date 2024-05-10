#include<bits/stdc++.h>
using namespace std;

double w0, w, m;
double re;		// ʣ���� 

bool check(double x) {
	re =  w0;
	for(int i = 1; i <= m; ++i)
		re = re + re * x - w;
	if(re > 0)	// ���û���꣬����̫��
		return true;
	return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	// w0 ������ w���ڸ����� m ���ڸ����������
	cin >> w0 >> w >> m;
	double l = 0, r = 500;
	while(r - l > 1e-5) {
		double mid = (r + l) / 2;
		if(check(mid))	// ����̫����С 
			r = mid;
		else
			l = mid;
	}
	printf("%.1f", l * 100);
	return 0;
}
