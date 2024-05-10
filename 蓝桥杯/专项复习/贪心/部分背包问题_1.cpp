#include<bits/stdc++.h> 
using namespace std;

const int N = 105;
struct gold {
	double weight;	// ������
	double value;	// �ܼ�ֵ
	double r;	// ��λ�۸� 
} a[N];
int n, t;
double sum;

bool cmp(gold x, gold y) {
	return x.r > y.r;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> t;
	for(int i = 1; i <= n; ++i) {
		cin >> a[i].weight >> a[i].value;
		a[i].r = a[i].value / a[i].weight;
	}
	sort(a + 1, a + n + 1, cmp);
	for(int i = 1; i <= n; ++i) {
		if(a[i].weight <= t) {
			sum += a[i].value;
			t -= a[i].weight;
		}
		else {
			sum += a[i].r * t;
			break;
		}
	}
	printf("%.2f", sum);
	return 0;
}
