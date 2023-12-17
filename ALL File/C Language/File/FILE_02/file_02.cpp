#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    FILE *in;
    FILE *out;

    in = fopen("E:/All c++ code/C Language/File/FILE_02/input.txt","r");
    out = fopen("E:/All c++ code/C Language/File/FILE_02/output.txt","w");

    if(in == 0 || out == 0){
        cout << "It's could not open." << endl;
    }
    int a;
    fscanf(in,"%d",&a);
    fprintf(out,"%d\n",a);

    return 0;
}

