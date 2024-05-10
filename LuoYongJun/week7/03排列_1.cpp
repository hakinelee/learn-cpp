#include <bits/stdc++.h>
using namespace std;

const int N = 300008;
int a[N];

int main(){
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++)
    	cin>>a[i];
    stack<int> st;
	long long ans = 0;
    for(int i = 1; i <= n; i++){
        while(!st.empty() && a[st.top()] < a[i]){
            st.pop();
            if(!st.empty()){
                int last = st.top();
                ans += (i - last + 1);
            }
        }
        st.push(i);
    }
    ans += (n - 1) * 2;              //（3）a[i]-a[j]之间不存在其他数字的情况
    cout<<ans;
	return 0;
}

