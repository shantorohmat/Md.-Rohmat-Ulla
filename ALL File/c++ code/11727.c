#include<stdio.h>
int main()
{
    int i,t,a,b,low,min,c;

    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a<b && c<b && a<c)
            printf("Case %d: %d\n",i,c);

        if(a<b && c<b && c<a)
            printf("Case %d: %d\n",i,a);

        if(a<c && b<c && b<a)
         printf("Case %d: %d\n",i,a);

         if(a<c && b<c && a<b)
         printf("Case %d: %d\n",i,b);

         if(b<a && c<a && b<c)
          printf("Case %d: %d\n",i,c);

         if(b<a && c<a && c<b)
          printf("Case %d: %d\n",i,b);


    }
    return 0;
}
