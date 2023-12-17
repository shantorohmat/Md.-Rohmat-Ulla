#include<iostream>
using namespace std;
int is_prime(int n);

int main()
{
    while(1)

    {

    int n;

    cout << "Give a number : " << endl;

    cin >> n;

    if(n == 0) { break; }

    if(0 == is_prime(n)) { cout << "NOT PRIME"<< endl; }

    if(1 == is_prime(n)) { cout << "It is prime" << endl; }

    }


}
int is_prime(int n)
{
     if(n < 2) { return 0; }

     if(n == 2) { return 1; }

     if(n % 2 == 0) { return 1;}

    for(int i = 3;i < n/2;i = i+2)
    {
        if(n%i==0) { return 0; }

    }
    return 1;
}
