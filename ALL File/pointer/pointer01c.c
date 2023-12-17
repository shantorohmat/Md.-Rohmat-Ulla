#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *marks;

    int n,i;

    printf("Give number of student : ");

    scanf("%d",&n);

    marks = (int *)calloc(n,sizeof(int));

    printf("give %d student number : ");


    for(i = 0;i < n;i++)
    {
        scanf("%d",&marks[i]);
    }

    printf("Now you can see the number : ");

    for(i = 0;i < n;i++)
    {
        printf("%d\t",marks[i]);
    }
    free(marks);

    return 0;


}
