#include<stdio.h>
int main()
{
    int A,i=0;
    double M=0;
    while(1)
    {
        scanf("%d", &A);
        if(A<0)
        {
            break;
        }
        else
        {
            i++;
            M+=A;
        }
    }
    printf("%.2lf\n", M/i);
    return 0;
}
