#include<stdio.h>
int main()
{
  double a, b;
  scanf("%lf",&a);
  if(a>=0.00 && a<=2000.00)
  {
      printf("Isento\n");
  }
  else if(a>=2000.01 && a<=3000.00)
  {
      a = a-2000;
      a = (a*8)/100;
      printf("R$ %.2lf\n", a);
  }
    else if(a>=3000.01 && a<=4500.00)
  {
      b = (1000*8)/100;
      a = a-3000;
      a = (a*18)/100;
      printf("R$ %.2lf\n", b+a);
  }
    else if(a>4500.00)
  {
      b = (1000*8)/100 + (1500*18)/100;
      a = a-4500;
      a = (a*28)/100;
      printf("R$ %.2lf\n", b+a);
  }
    return 0;
}
