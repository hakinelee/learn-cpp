#include<bits/stdc++.h> 
using namespace std;
// ѡ������ 
int a[100005], n;
void selection_sort() {
	for(int i = 0; i < n-1; i++) {
		int m = i;   //m: ��¼a[i]~a[n-1]����С������λ��
		for(int j = i+1; j < n; j++)     // �� a[i]~a[n-1]����С��
			if(a[m] > a[j])
				m = j;
		swap(a[i], a[m]);                // ����
	}
}
int main() {
	cin>>n;
    for(int i = 0; i < n; i++)
    	cin>>a[i];
    selection_sort);
    for(int i = 0; i < n; i++)
		cout<<a[i]<<" ";
	return 0;
}
