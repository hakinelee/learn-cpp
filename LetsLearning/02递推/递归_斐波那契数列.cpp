#include<bits/stdc++.h>
using namespace std;

//int a(int n) {	// µÝ¹é 
//	int ans;
//	if(n == 1 || n == 2)
//		ans = 1;
//	else
//		ans = a(n-1) + a(n-2);
//	return ans;
//}

int main() {
	long long a[60] = {0};
	int n;
	cin>>n;
	a[1] = 1;
	a[2] = 1;
	
	for(int i = 3; i <= n; i++)	{	// µÝÍÆ 
		a[i] = a[i-1] + a[i-2];		// µÝÍÆÊ½ 
	}
	
	for(int i = 1; i <= n; i++)
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
	return 0;
} 
