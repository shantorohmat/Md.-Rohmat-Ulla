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

     if(n < 2)

    {
        cout << "NOT PRIME"<< endl;

        break;
    }

    if(0 == is_prime(n)) { cout << "NOT PRIME"<< endl; }

    if(1 == is_prime(n)) { cout << "It is prime" << endl; }

    }


}
int is_prime(int n)
{




    for(int i = 2;i < n;i++)
    {
        if(n%i==0) { return 0; }

    }
    return 1;
}

