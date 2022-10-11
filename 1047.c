#include<stdio.h>
int main()
{
    int a, b, c, d, D, s, e;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    s = (a*60)+b;
    e = (c*60)+d;
    d = e-s;
    if(d<=0)
    {
        d = d+(24*60);
    }
    s = d/60;
    e = d%60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", s, e);
    return 0;
}
