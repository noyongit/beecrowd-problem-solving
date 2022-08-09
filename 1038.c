#include<stdio.h>
int main()
{
    int X, Y;
    double p;
    scanf("%d %d", &X, &Y);
    if(X==1)
    {
        p = 4.00;
        p = p*Y;
        printf("Total: R$ %.2lf\n",p);
    }

    else if(X==2)
    {
        p = 4.50;
        p = p*Y;
        printf("Total: R$ %.2lf\n",p);
    }
    else if(X==3)
    {
        p = 5.00;
        p = p*Y;
        printf("Total: R$ %.2lf\n",p);
    }
    else if(X==4)
    {
        p = 2.00;
        p = p*Y;
        printf("Total: R$ %.2lf\n",p);
    }
    else if(X==5)
    {
        p = 1.50;
        p = p*Y;
        printf("Total: R$ %.2lf\n",p);
    }

    return 0;

}
