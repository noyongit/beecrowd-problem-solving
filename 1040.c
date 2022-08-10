#include<stdio.h>
int main()
{
    double N1, N2, N3, N4, N5, A, a;
    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);
    A = (N1*2+N2*3+N3*4+N4*1)/10;
    printf("Media: %.1lf\n", A);
    if(A>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(A<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if(5.0<=A && 6.9>=A)
    {
        scanf("%lf", &N5);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1lf\n",N5);
        a = ((A + N5)/2);
        if(A>=5.0)
        {
        printf("Aluno aprovado.\n");
        }
        else if(A<=4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf", a);

    }

    return 0;
}
