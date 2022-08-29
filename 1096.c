#include<stdio.h>
int main()
{
    int i, j;
    for(i=1,j=7; i<10 && j>=5; i,j--)
    {
        printf("I=%d J=%d\n", i,j);
    }
    for(i=3,j=7; i<10 && j>=5; i,j--)
    {
        printf("I=%d J=%d\n", i,j);
    }
    for(i=5,j=7;i<10 && j>=5; i,j--)
    {
        printf("I=%d J=%d\n", i,j);
    }
    for(i=7,j=7;i<10 && j>=5; i,j--)
    {
        printf("I=%d J=%d\n", i,j);
    }
    for(i=9,j=7;i<10 && j>=5; i,j--)
    {
        printf("I=%d J=%d\n", i,j);
    }
    return 0;
}
