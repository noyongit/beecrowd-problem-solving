#include<stdio.h>
int main()
{
    int N,i=1,M;
    scanf("%d",&N);
    while(i<=10)
    {
        M = (i * N);
        printf("%d x %d = %d\n", i, N, M);
        i++;
    }
    return 0;
}
