#include<stdio.h>
int main()
{
    double hs,os;

    while(scanf("%lf %lf",&hs,&os) != EOF)
          {
              if(os > hs)
              {

              printf("%.0lf\n",(os - hs));
              }
              else
              {
                  printf("%.0lf\n",hs-os);
              }
          }
          return 0;
}
