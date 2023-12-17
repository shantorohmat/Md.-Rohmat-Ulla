#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    FILE *in = fopen("input.txt","r");
    FILE *out = fopen("output.txt","a");

    int a,s,ss = 0;
    fscanf(in,"%d",&a);

    while(a--)
    {
        fscanf(in,"%d",&s);
        ss = ss +s;
    }
    fprintf(out,"%d\n",ss);
    printf("%d",ss);
    cout << endl;
}
