#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c;
    char oper, s[20], ans[20];
    scanf("%d\n", &n);
    while(n--) {
        fgets(s, sizeof(s), stdin); // 读入一行
        if(s[0] == 'a' || s[0] == 'b' || s[0] == 'c') {
            oper = s[0];
            s[0] = ' ';
        }
        sscanf(s, "%d %d", &a, &b); // 从字符串中读入整数a,b
        switch(oper) {
            case 'a': {
                c = a + b;
                sprintf(ans, "%d+%d=%d", a, b, c);  // 将信息输入法到字符串中
                break;
            }
            case 'b': {
                c = a - b;
                sprintf(ans, "%d-%d=%d", a, b, c);
                break;
            }
            case 'c': {
                c = a * b;
                sprintf(ans, "%d*%d=%d", a, b, c);
                break;
            }
        }
        printf("%s\n%d\n", ans, strlen(ans));
    }
    return 0;
}
