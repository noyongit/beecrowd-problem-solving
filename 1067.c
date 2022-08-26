#include<stdio.h>
int main()
{
    int X,i;
    scanf("%d", &X);
    i = 1;
    while(i<=X)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}
