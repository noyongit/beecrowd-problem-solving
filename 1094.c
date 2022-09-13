#include<stdio.h>
int main()
{
    int N, t, T=0, i, c=0, r=0, s=0;
    char a, C, R, S, p = '%';
    double n, o, y;
    scanf("%d", &N);
    for(i = 1 ; i<=N ; i++)
    {
        scanf("%d %c", &t, &a);
        T+=t;
        if(a==67)
        {
            c+=t;
        }
        else if(a==82)
        {
            r+=t;
        }
        else
        {
            s+=t;
        }
    }
    n = (c*1.00/T)*100;
    o = (r*1.00/T)*100;
    y = (s*1.00/T)*100;
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2lf %c\nPercentual de ratos: %.2lf %c\nPercentual de sapos: %.2lf %c\n", T, c, r, s, n, p, o, p, y, p);
    return 0;
}
