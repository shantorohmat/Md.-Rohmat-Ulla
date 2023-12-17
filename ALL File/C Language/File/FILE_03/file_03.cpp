#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    FILE *in;
    FILE *out;


    in = fopen("E:/All c++ code/C Language/File/FILE_03/input.txt","r");
    out = fopen("E:/All c++ code/C Language/File/FILE_03/output.txt","w");

    int n,a,s = 0;
    fscanf(in,"%d",&n);
    while(n--){
            fscanf(in,"%d",&a);
            s += a;

    }

    fprintf(out,"%d",s);
    printf("%d",s);

    return 0;

}
