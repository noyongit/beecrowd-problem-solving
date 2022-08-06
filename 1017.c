#include<stdio.h>
int main()
{
    int h, s, D;
    double L;
    scanf("%d %d", &h, &s);
    D = h*s;
    L = D/12.0;
    printf("%.3lf\n", L);
    return 0;
}
