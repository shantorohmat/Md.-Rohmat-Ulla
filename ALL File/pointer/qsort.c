#include <stdio.h>
#include <stdlib.h>

int comparefun(const void *a,const void *b)
    {
        return (*(int *)a - *(int *)b);
    }

int main()
{
    int i,n = 5;

    int values[] = {54,56,25,35,87};

    qsort(values,5,sizeof(int),comparefun);

    for(i = 0;i < n;i++)
    {
        printf("%d\t",values[i]);

    }
    printf("\n\n");

    return 0;

}


