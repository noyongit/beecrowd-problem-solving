#include<stdio.h>
int main()
{
   int P;
   while(1)
   {
       scanf("%d", &P);
       if(P!=2002)
       {
           printf("Senha Invalida\n");
       }
       else
       {
           printf("Acesso Permitido\n");
           break;
       }
   }
    return 0;
}
