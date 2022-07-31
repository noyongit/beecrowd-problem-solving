#include<stdio.h>
int main()
{
    int N, M;
    double H, s;
    scanf("%d%d%lf", &N, &M, &H);
    s = (M * H);
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", N, s);
    return 0;
}
