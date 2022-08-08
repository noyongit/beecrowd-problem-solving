#include<stdio.h>
#include<math.h>
int main()
{
    double A, B, C, a, R1, R2;
    scanf("%lf %lf %lf", &A, &B, &C);
    a = (4.0*A*C);
    R1 = (((-1*B) + (sqrt((pow(B,2) - a))))/(2.0*A));
    R2 = (((-1*B) - (sqrt((pow(B,2) - a))))/(2.0*A));
    if(A==0 || (pow(B,2)< a))
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %.5lf\nR2 = %.5lf\n",R1,R2);
    }
    return 0;
}
