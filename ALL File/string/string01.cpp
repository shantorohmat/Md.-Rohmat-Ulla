#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char sp[] ="BangladeSH is a country";
    //int length= 0;

     //int length = sizeof(sp)/sizeof(*sp);
    /* for(int i = 0;sp[i] != '\0';i++)
     {
         length++;
     }*/
     int length = strlen(sp);
     cout << length<< endl;

     for (int i = 0; i < length ;i++)
      {

               if(sp[i] >= 65 && sp[i] <= 90)
                   {
                    sp[i] = 'a' + (sp[i] - 'A');
                   }

     } cout << sp << '\t';
     return 0;

}
