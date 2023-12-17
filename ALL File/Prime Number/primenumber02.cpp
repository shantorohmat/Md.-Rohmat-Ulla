#include <iostream>
#include <math.h>

int is_prime(int n);
using namespace std;
int main()
{
    while(1){

    int n;

    cout << "Please give a number : " << endl;

    cin >> n;

    if(n == 0) { break; }

    if(0 == is_prime(n)){ cout << "NOT PRIME" << endl ; }

    if(1 == is_prime(n)){cout << "It is prime " << endl; }

    }

}
int is_prime(int n)
{
    if(n < 2) { return 0; }

    if(n == 2) { return 1; }

    if(n % 2 == 0) { return 0; }

    int root = sqrt(n);

    for(int i = 3;i < sqrt(n);i = i+2)
    {
        if(n % i == 0) { return 0; }
    }
    return 1;
}

