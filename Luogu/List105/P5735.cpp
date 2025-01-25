#include<bits/stdc++.h>
using namespace std;

double dis(double x1, double y1, double x2, double y2) {
    return sqrt(abs(pow((x2 - x1), 2)) + abs(pow((y2 - y1), 2)));
}

int main() {
    double x1, y1, x2, y2, x3, y3, ans = 0;
    scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
    ans += dis(x1, y1, x2, y2);
    ans += dis(x2, y2, x3, y3);
    ans += dis(x3, y3, x1, y1);
    printf("%.2lf\n", ans);
    return 0;
}
