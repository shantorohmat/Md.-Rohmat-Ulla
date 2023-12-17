#include <stdio.h>

int main()
{
    void *p;

    int n = 11;

    p = &n;

    printf("Address of n : %d\n",&n);

    printf("Value of p : %d\n",p);

    printf("Content of p : %d\n",*((int *)p));

    return 0;
}
