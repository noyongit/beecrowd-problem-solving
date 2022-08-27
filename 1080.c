#include<stdio.h>
int main()
{
    int i=1,x,M = 0,p;
    while(i<=5)
    {
        scanf("%d", &x);
        if(x>M)
        {
            M = x;
            p = i;
        }
        i++;
    }
     printf("%d\n%d\n", M,p);
    return 0;
}
