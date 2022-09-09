#include<stdio.h>
int main()
{
    int n,a,i,j,f;
    scanf("%d", &n);
    for(j=1; j<=n; j++)
    {
        scanf("%d", &a);
        f=0;
        for(i=1; i<a; i++)
        {
            if(a%i==0)
            {
                f+=i;
            }
        }
        if(f==a)
        {
            printf("%d eh perfeito\n", a);
        }
        else
        {
            printf("%d nao eh perfeito\n", a);
        }
    }
    return 0;
}
