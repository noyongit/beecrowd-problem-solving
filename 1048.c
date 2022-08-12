#include<stdio.h>
int main()
{
    int o;
    double M, a;
    char c='%';
    scanf("%lf", &M);
    if(M>0.00 && M<=400.00)
    {
        o =15;
        a = (M*15)/100;
        M = M + a;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %c\n", M, a, o, c);
    }
    else if(M>400.00 && M<=800.00)
    {
        o =12;
        a = (M*12)/100;
        M = M + a;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %c\n", M, a, o, c);
    }
    else if(M>800.00 && M<=1200.00)
    {
        o =10;
        a = (M*10)/100;
        M = M + a;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %c\n", M, a, o, c);
    }
    else if(M>1200.00 && M<=2000.00)
    {
        o =7;
        a = (M*7)/100;
        M = M + a;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %c\n", M, a, o, c);
    }
    else if(M>2000.00)
    {
        o=4;
        a = (M*4)/100;
        M = M + a;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %c\n", M, a, o, c);
    }
    return 0;
}
