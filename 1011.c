#include<stdio.h>
#include<math.h>
int main()
{
    double R,pi,v;
    pi = 3.14159;
    scanf("%lf", &R);
    v = (4/3.0) * pi * pow(R , 3);
    printf("VOLUME = %.3lf\n", v);
    return 0;
}
