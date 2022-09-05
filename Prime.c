#include<stdio.h>
int main()
{
    int N, i, f = 0;
    scanf("%d", &N);
    if(N==1)
    {
         printf("Not_Prime\n");
    }
    else
    {
    for(i=2 ; i<N ; i++)
    {
        if(N%i==0)
        {
            f = 1;
            break;
        }
        else
        {

        }

    }
    if(f==1)
    {
        printf("Not_Prime\n");
    }
    else
    {
         printf("Prime\n");
    }

}
 return 0;
}
