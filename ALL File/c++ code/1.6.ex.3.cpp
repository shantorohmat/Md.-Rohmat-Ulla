#include<iostream>
using namespace std;

int main()
{
    int t,l,i,fact;

    cout << "tast case Is : " ;

    cin >> l ;

    for(int j = 1; j <= l;j++){

    cout << "Enter a number : ";

    cin >> t ;

    fact = 1;

    for(i = 1; i <= t;i++)
    {
        fact = fact *i;
    }

    cout << " the factarial number is " << fact <<endl;

}
return 0;

}
