
#include<stdio.h>
int main()
{
    double it,tex;

    int i = 1,t;

    scanf("%d",&t);

    for(i = 1;i <= t; i++)
    {
        scanf("%lf",&it);

        if(it > 0 && it <= 180000)
        {
            tex = 0;
        }
        else if(it > 180000 && it <= 480000)
        {
            tex =(it - 180000) * .10;

            if(tex < 2000 )
            {
                tex  = 2000;
            }


        }

        else if(it > 480000 && it <= 880000)
        {
            tex = 30000 + (it - 480000)*.15 ;
             if(tex < 2000)
            {
                tex  = 2000;
            }
        }

        else if(it > 880000 && it <= 1180000)
        {
            tex = 90000 + (it - 880000)* .20 ;
        }
        else if(it>1180000){
            tex = 150000 + (it - 1180000) * .25  ;
        }
                 printf("Case %d: %d\n",i,(int) ceil (tex));

    }
    return 0;

}
