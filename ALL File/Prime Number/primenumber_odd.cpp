#include <iostream>
#include <math.h>
#include<stdio.h>

using namespace std;

    int ara[40];

    int size = 40;

    void print_ara()
    {
        int i;

    for( i = 2;i < size;i++)
    {
        printf("%4d",ara[i]);
    }
    printf("\n");

    for(int i = 2;i < size;i++)
    {
        cout << "-----";
    }
    printf("\n");

    for(int i = 2;i < size;i++)
    {
        printf("%4d",i);
    }
    printf("\n\n\n");
}

void sieve()
{
    int i,j,root;

    for(int i = 2;i < size;i++)
    {
        ara[i] = 1;
    }
    root = sqrt(size);

    print_ara();

    for(int i = 2;i <= root;i++)
    {
        if(ara[i] == 1){
            for(int j = 2;i*j <= size;j++)
            {
                ara[i*j] = 0;
            }
            print_ara();
        }
    }
}
int is_prime(int n)
{
    int i;

    if(n < 2){ return 0; }

    return ara[n];
}

int main()
{
    int n,m;

    sieve();

    while(1)
    {
        cout << "Please enter a number (enter 0to exit): ";

        cin >> n;

        if(n == 0) { break; }

        if(n >= size)
        {
            cout << "The number should be less than " << size;
            continue;
        }
        if(1 == is_prime(n))
        {
            cout << n << "is a prime number" << endl;
        }
        else
        {
            cout << n << "is not a prime number" << endl;
        }
    }
    return 0;
}

