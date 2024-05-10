#include<bits/stdc++.h>
using namespace std;

double a, b, c, d;

double fx(double x) {
	return a * pow(x, 3) + b * pow(x, 2) + c * x + d;
}

void search_1(double l, double r) {
	while(r - l > 1e-5) {
		double mid = (l + r) / 2;
		if(fx(mid) <= 0) 
			l = mid;
		else
			r = mid;
	}
	printf("%.2f ",l);
}
void search_2(double l, double r) {
	while(r - l > 1e-5) {
		double mid = (l + r) / 2;
		if(fx(mid) >= 0) 
			l = mid;
		else 
			r = mid;
	}
	printf("%.2f ",l);
}


int main() {
	cin >> a >> b >> c >> d;
	//ע������֮��ľ���ֵ>=1���ʿ��Ա���ÿ���㣬���Ƿ��������㸽��������ڵĻ������ֲ��� 
	for(double i = -101; i <= 101; ++i) {
		if(fx(i) == 0) {
			printf("%.2f ", i);
		}
		else if(fx(i) < 0 && fx(i + 1) > 0){
			search_1(i, i + 1); 
		}
		else if(fx(i) > 0 && fx(i + 1) < 0){
			search_2(i, i + 1);
		}
	}
	return 0;
} 
