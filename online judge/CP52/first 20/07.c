#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
    int t;

   scanf("%d",&t);
    while(t--){
    char str[1000000];
    scanf(" %[^\n]",str);
    char *cursor = str;
    int count = 0;
    while(cursor != str + strlen(str))
    {
        long int x = strtol(cursor , &cursor,10);
        count ++;
    }
    printf("%d\n",count);
    }

    return 0;

}

