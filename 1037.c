#include<stdio.h>
int main()
{
    double N;
    scanf("%lf", &N);
    if(0>N || N>100)
    {
        printf("Fora de intervalo\n");
    }
    else if(0<=N && 25.0000>=N)
    {
        printf("Intervalo [0,25]\n");
    }
    else if(25.00001<N && 50.0000000>=N)
    {
        printf("Intervalo (25,50]\n");
    }
    else if(50.00001<N && 75.0000000>=N)
    {
        printf("(50,75]\n");
    }
    else
    {
        printf("Intervalo (75,100]\n");
    }

    return 0;
}
