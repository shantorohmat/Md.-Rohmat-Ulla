#include<stdio.h>
int main()
{
    int t,i;

    double d,f,c;

    scanf("%d",&t);

    for(i = 1; i <= t;i++)
    {
        scanf("%lf %lf",&c,&d);

        f = (9*c/5)+ d;

        c = (5*f/9.0) ;

        printf("Case %d: %.2lf\n",i,c);
    }
    return 0;
}
