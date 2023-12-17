#include <stdio.h>
int main()
{
    float n;

    while(scanf("%f",&n) == 1)
    {

    float G = 0;

    for(float i=1;i <= n;i++)
    {
       G = G + (1/i);
    }

    printf("%.12f\n",G);

    }

    return 0;
}
