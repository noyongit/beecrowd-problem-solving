#include<stdio.h>
#include<math.h>
int main()
{
    double A, B, C, tri, pi, c, tra, s, r;
    scanf("%lf %lf %lf", &A, &B, &C);
    tri = (A * C)/2;
    pi = 3.14159;
    c = pi * pow(C,2);
    tra = ((A+B)/2) * C;
    s = pow(B,2);
    r = (A * B);
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", tri, c, tra, s, r);
           return 0;
}
