#include<bits/stdc++.h>
using namespace std;

int main() {
	string a = "123";
	int lena = a.size();	// �ַ���a�ĳ��� 
	cout<<"�ַ���a�ĳ���: "<<lena<<endl;
	int b[lena];
	
	cout<<"���a��"<<endl;
	for(int i=0; i<a.size(); i++) {
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
		cout<<"*******"<<endl;
	}

	cout<<"���b��"<<endl;
	for(int i=0; i<lena; i++)
        b[lena-1-i] = a[i] - '0';
    for(int i=0; i<a.size(); i++) {
		cout<<"b["<<i<<"] = "<<b[i]<<endl;
		cout<<"*******"<<endl;
	}
	return 0;
} 
