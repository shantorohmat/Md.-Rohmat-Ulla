#include <stdio.h>
int main()
{
    int h1,m1,h2,m2,hour,minutes;

    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);

    hour = h2 - h1;

    if(h2 - h1 < 0)
    {
        hour = 24 + h2 - h1;
    }
    minutes = m2 - m1;

    if(m2 - m1 < 0)
    {
        minutes = 60 + m2 - m1;

        hour--;
    }
    if(h1 == h2 && m1 == m2)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }

    else

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,minutes);

    return 0;
}
