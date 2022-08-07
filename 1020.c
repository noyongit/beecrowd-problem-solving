#include<stdio.h>
int main()
{
    int A, a, b, c, d;
    scanf("%d",&A);
    a = A/365;
    b = A%365;
    c = b/30;
    d = b%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",a, c, d);
    return 0;
}
