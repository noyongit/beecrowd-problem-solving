#include<stdio.h>
int main()
{
    int c1,u1;
    double p1,Paid;
    int c2,u2;
    double p2;
    scanf("%d %d %lf", &c1, &u1, &p1);
    scanf("%d %d %lf", &c2, &u2, &p2);
    Paid = (u1*p1) + (u2*p2);
    printf("VALOR A PAGAR: R$ %.2lf\n", Paid);

    return 0;
}
