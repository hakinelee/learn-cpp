#include<bits/stdc++.h>
using namespace std;
// P1102 A-B ����
#define ll long long
const int m =2010;
int n, c;
int a[m];
int cnt;

int main() {
	cin>>n>>c;
	for(int i = 1; i <= n; i++)
		cin>>a[i];

	// ���Ȱ�����˳������
	sort(a+1, a+n+1); 
	
	for(int i = n; i > 0; i--) {
		int b = a[i] - c;
//		if((a[i] - a[1] < c) && (a[i-1] - a[1] < c))
//			break;

		int L = 1, R = i;
		while(L < R) {
			int mid = (L + R) / 2;
			if(a[mid] == b) {		
				cnt++;
				cout<<"cnt"<<cnt<<endl;
				break;
			}
			if (a[mid] > b) 
				R = mid;    //������벿��:[L,mid]
	        else
				L = mid + 1;  //�����Ұ벿��:[mid+1, R]
		}
	}
	cout<<cnt;
	return 0;
}
