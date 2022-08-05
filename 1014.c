#include<stdio.h>
int main()
{
    int X;
    double Y, S;
    scanf("%d %lf", &X, &Y);
    S = X/Y;
    printf("%.3lf km/l\n", S);
    return 0;
}
