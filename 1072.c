#include<stdio.h>
int main()
{
    int N,i=1,e=0,d=0,j;
    scanf("%d\n", &N);
    while(i<=N)
    {
        scanf("%d",&j);
        if(j>=10 && j<=20)
        {
            e++;
        }
        else
        {
            d++;
        }
        i++;
    }
    printf("%d in\n",e);
    printf("%d out\n",d);
    return 0;
}
