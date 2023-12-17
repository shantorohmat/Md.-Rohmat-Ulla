#include<stdio.h>
int main()
{
    int i,T,H,L,W;

    scanf("%d",&T);

        for(i = 1; i <= T; i++)
        {
            scanf("%d %d %d",&W,&L,&H);
            if(H <= 20 && L <= 20 && W <= 20)
            {
            printf("Case %d: good\n",i);
            }
            else
            {
                printf("Case %d: bad\n",i);
            }
        }

    return 0;
}
