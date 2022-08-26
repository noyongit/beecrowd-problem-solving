#include<stdio.h>
int main()
{
    int a,b,c,d,e,C=0,F=0,P=0,N=0;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if(a%2==0)
    {
        C++;
    }
    else
    {
        F++;
    }
    if(b%2==0)
    {
        C++;
    }
      else
    {
        F++;
    }
    if(c%2==0)
    {
        C++;
    }
      else
    {
        F++;
    }
    if(d%2==0)
    {
        C++;
    }
      else
    {
        F++;
    }
    if(e%2==0)
    {
        C++;
    }
      else
    {
        F++;
    }
    if(a>0)
    {
        P++;
    }
    else if(a<0)
    {
        N++;
    }
     if(b>0)
    {
        P++;
    }
    else if(b<0)
    {
        N++;
    }
     if(c>0)
    {
        P++;
    }
    else if(c<0)
    {
        N++;
    }
     if(d>0)
    {
        P++;
    }
    else if(d<0)
    {
        N++;
    }
     if(e>0)
    {
        P++;
    }
    else if(e<0)
    {
        N++;
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",C,F,P,N);
    return 0;
}
