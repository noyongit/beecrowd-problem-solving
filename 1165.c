#include<stdio.h>
int main()
{
    int N, j, i=1, f, a;
    scanf("%d", &a);
    for(j=1; j<=a; j++)
    {
        scanf("%d", &N);
        if(N==1)
        {
            printf("1 nao eh primo\n");
        }
        else
        {
            for(i=2 ; i<N ; i++)
            {
                f=0;
                if(N%i==0)
                {
                    f = 1;
                    break;
                }
            }
            if(f==1)
            {
                printf("%d nao eh primo\n", N);
            }
            else
            {
                printf("%d eh primo\n", N);
            }

        }
    }
    return 0;
}
