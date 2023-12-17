#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct student{
    int id;
    char *name;

    };
    struct student one;

    int n = 50;

    one.id = 10;

     //char *name;

    //yname = (char *)malloc(sizeof(char)*n);

    one.name = "Shanto Rohmat";

    printf("ID : %d \n",one.id);

    printf("Name : %s\n",one.name);

    return 0;




}
