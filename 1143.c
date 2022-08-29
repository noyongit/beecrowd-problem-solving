#include<stdio.h>
int main()
{
    int N, i,a,j,b,k;
    scanf("%d", &N);
    for(i=1,j=1,k=1 ;i<=N; i++)
    {
        a = i*i;
        b = a*i;
        printf("%d %d %d\n", i, a, b);
    }
    return 0;
}
