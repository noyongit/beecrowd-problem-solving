#include<stdio.h>
int main()
{
    int N, i, j, f, sum, x, y;
    scanf("%d", &N);
    for(i = 1 ; i <= N ; i++)
    {
        scanf("%d %d", &x, &y);
        sum=0;
        f=0;
        for(j = x; ;j++)
        {
            if(j%2!=0)
            {
                sum+=j;
                f++;
            }
            else if(f==y)
            {
                break;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
