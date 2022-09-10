#include<stdio.h>
int main()
{
   int x, f, g, i;
   while(1)
   {
   scanf("%d", &x);
   if(x==0)
   {
       break;
   }
   f=0,g=0;
   i=x;
   while(1)
   {
       if(i%2==0)
       {
           f+=i;
           g++;
       }
       else if(g==5)
       {
           break;
       }
       i++;
   }
   printf("%d\n", f);
   }
    return 0;
}
