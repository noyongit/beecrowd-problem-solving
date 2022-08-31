#include<stdio.h>
int main()
{
    int a, b, i;
    scanf("%d %d", &a, &b);
    if(a<b)
    {

        a++;
    for(i=a; i<b; i++)
    {
        if(i%5==2 || i%5==3)
        {
            printf("%d\n", i);
        }

    }
    }
    else
    {
        b++;
        for(i=b; i<a; i++)
        {
            if(i%5==2 || i%5==3)
            {
                printf("%d\n", i);
            }

        }
    }
    return 0;
}
