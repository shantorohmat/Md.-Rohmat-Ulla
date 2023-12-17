#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    FILE *fp;
    fp = fopen("E:/All c++ code/C Language/File/FILE_01/input.txt","r");

    if(!fp){
        cout << "It's could not open." << endl;
    }
    int a;
    fscanf(fp,"%d",&a);
    printf("%d\n",a);

    return 0;
}
