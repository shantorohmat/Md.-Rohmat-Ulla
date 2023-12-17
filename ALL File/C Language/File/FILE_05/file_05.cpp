#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    FILE *in;

    in = fopen("E:/All c++ code/C Language/File/FILE_05/input.txt", "r");

    if(in == 0){cout << "can't open" << endl; return 1;}

    int cs,ns;

    fscanf(in,"%d", &cs);

    fclose(in);

    cout<< "Current Score : " << cs << endl;

    scanf("%d", &ns);

   if(cs < ns)
   {
       in = fopen("E:/All c++ code/C Language/File/FILE_05/input.txt", "w");

       if(in == 0){cout << "can't open" << endl; return 1;}

       fprintf(in,"%d\n", ns);

       fclose(in);

       cout << ns << endl;

       cout << "Congratulation you win this game" << endl;
   }
   else cout << "You lose this game" << endl;

   return 0;


}
