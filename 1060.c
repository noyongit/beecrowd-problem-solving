#include<stdio.h>
int main()
{
    double a,b,c,d,e,f,F=0;
    scanf("%lf %lf %lf %lf %lf %lf",&a, &b, &c, &d, &e, &f);
    if(a>0)
    {
        F++;
    }
    if(b>0)
    {
        F++;
    }
    if(c>0)
    {
        F++;
    }
    if(d>0)
    {
        F++;
    }
    if(e>0)
    {
        F++;
    }
    if(f>0)
    {
        F++;
    }
    printf("%.0lf valores positivos\n",F);
    return 0;
}
