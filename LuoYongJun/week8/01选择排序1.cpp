#include<bits/stdc++.h> 
using namespace std;

void selection_sort() { 

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
    for (int i = 0; i < n; i++)  scanf("%d", &a[i]);
    selection_sort();
    for (int i = 0; i < n; i++)  printf("%d ", a[i]);
	return 0;
}
