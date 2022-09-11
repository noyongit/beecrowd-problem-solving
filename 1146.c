#include<stdio.h>
int main()
{
    int x, i;
    while(1)
    {
    scanf("%d", &x);
    if(x!=0)
    {
          for(i = 1 ; i<=x; i++)
        {
            printf("%d", i);
            if(i==x)
            {
                printf("\n");
                break;
            }
            printf(" ");
        }
    }
    else
    {
    break;
    }
    }
    return 0;
}
