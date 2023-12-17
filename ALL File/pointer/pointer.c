#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;

    int *marks;

    printf( "Enter the number of student : ");

    scanf("%d",&n);

    marks = (int *)malloc(sizeof(int)*n);

    printf("Enter the marks for each student: " );

    for(i = 0;i < n;i++)
    {
        scanf("%d",&marks[i]);
    }
   printf("Now here you can see the values : ");

    for(i = 0; i < n;i++)
    {
        printf("%d\t",marks[i]);
    }
    printf("\n");

    free(marks);


    return 0;


}
