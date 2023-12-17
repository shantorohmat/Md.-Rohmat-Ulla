#include <stdio.h>

int main()
{
    int s1[] = {100,200,300,400,500,600};

    int *p;

    p = s1;

    printf("*p : %d\n",*p);

    printf("(*p)++ : %d\n",(*p)++);

    printf("*(p++) : %d \n",*(p++));


    return 0;
}
