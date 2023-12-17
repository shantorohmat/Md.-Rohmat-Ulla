#include <stdio.h>

int main()
{
    char *s1 = "Bangladesh";

    printf("%c,%c,%c\n",*s1,*(s1 + 1),*(s1 + 2));

    printf("%c,%c,%c\n",*s1,*s1+2,*s1+1);

    return 0;
}
