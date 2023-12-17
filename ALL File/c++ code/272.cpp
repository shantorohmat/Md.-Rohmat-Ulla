#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    char s1[1000];

    int i = 0,sum = 0;

    while(gets(s1))///(scanf("%[^\n]",s1))//scanf("%s",&s1)
    {


        for(i = 0;s1[i] != '\0';i++)
        {

            if(s1[i] == '"' )
            {
              sum ++;

              if(sum % 2 == 0)

               cout << "\'" << "\'" ;

              else

               cout <<"`" << "`";
            }

           else if( s1[i] != '"')

           {
                cout << s1[i] ;
           }
      }
    }

    return 0;
}
