#include<stdio.h>
int main()
{
    char s1[1000];

    int i = 0,sum = 0;

    while(gets(s1)) {

    for(i = 0;s1[i] != '\0';i++){

    if(s1[i] == '"' )
    {
        sum ++;

     if(sum % 2 == 0)

      printf("\'\'" );

     else

      printf("``");

    }
     else if( s1[i] != '"')

     {

     printf("%c",s1[i]) ;

     }

    }

    printf("\n");

    }

    return 0;
}

