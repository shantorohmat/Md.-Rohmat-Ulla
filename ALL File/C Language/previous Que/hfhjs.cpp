
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    FILE *in;

    in = fopen("input.txt", "r");

    FILE *out;

    out = fopen("output.txt", "w");

    if(in == 0){cout << "can't open" << endl; return 1;}

    int n;
    char nm[1000],id[1000],gm[1000];

    fscanf(in,"%d", &n);
    while(n--)
    {
        fscanf(in," %[^\n]",&nm);
        fprintf(out,"%s",nm);


        fscanf(in," %[^\n]",&id);
         fprintf(out,"%s",id);

        fscanf(in," %[^\n]",&gm);
         fprintf(out,"%s",gm);


        int x ;
        fscanf(in,"%d",&x);
         fprintf(out,"%d",x);

        int y;

        while(x--)
        {
            fscanf(in,"%d",y);
            fprintf(out,"%d\n",y);

        }
    }








}
