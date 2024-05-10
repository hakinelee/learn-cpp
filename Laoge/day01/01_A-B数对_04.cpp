#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 200010;
int a[N], n, c, st;
ll cnt;

int main() {
	cin >> n >> c;
	for(int i = 1; i <= n; ++i) 
		cin >> a[i];
	sort(a + 1, a + 1 + n);
	
	for(int i = 1; i < n; i++) {	//����ÿһ��B 
		int l = i + 1, r = n;		//Ѱ��A��һ�γ��ֵ�λ��
		while(l < r) { 				//��Ϊ�ǵ�һ�γ��֣���������ģ��1
			int mid = l + r >> 1;
			if(a[mid] - a[i] >= c) 	//�жϣ���Ŀ��ֵ���ұߣ����㣬������
				r = mid;
			else 
				l = mid + 1;
		}
		if(a[l] - a[i] == c)  		//���ҵ�C�ͼ��� 
			st = l;
		else 
			continue;
		
		l = st - 1, r = n;			//����A�����ֵ�λ�� 
		while(l < r) { 				//��Ϊ�����һ�γ��֣��������ң�ģ��2
			int mid = l + r + 1 >> 1;
			if(a[mid] <= a[st])  	//�жϣ���Ŀ��ֵ����ߣ����㣬����ȥ
				l = mid;
			else 
				r = mid - 1;
		}
		cnt += l - st + 1;			//�����ֵ�λ�ü��״γ��ֵ�λ�þ������䳤�ȣ���A�ĸ��� 
	}
	cout << cnt;
	return 0;
} 
