#include<stdio.h>
int main()
{
    double A, B, MEDIA;
    scanf("%lf %lf", &A, &B);
    A = 3.5 * A;
    B = 7.5 * B;
    MEDIA = (A+B)/11;
    printf("MEDIA = %.5lf\n", MEDIA);

    return 0;
}
