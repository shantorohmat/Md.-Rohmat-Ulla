#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int a,ss = 0,s;


    scanf("%d",&a);

    while(a--)
    {
        scanf("%d",&s);
        ss = ss + s;
    }
    printf("%d\n",ss);

    printf("%d",ss);


}
