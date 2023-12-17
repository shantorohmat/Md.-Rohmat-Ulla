
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    FILE *in;
    FILE *out;


    in = fopen("E:/All c++ code/C Language/File/FILE_04/input.txt","r");
    out = fopen("E:/All c++ code/C Language/File/FILE_04/output.txt","w");

    char c;
    while(1){

            int ret = fscanf(in,"%c",&c);
            if(ret == EOF)
            break;
            cout << c ;
            fprintf(out,"%c",c);

    }


    return 0;

}
