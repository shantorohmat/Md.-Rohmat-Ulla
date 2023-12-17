#include<iostream>
using namespace std;

int main()

{
    double hour,wage,gross_pay,day;

    string name;

    cin  >> name ;
    cout  << name ;

    cout << "Enter hour ,wage,day per mont ";

    cin >> hour >> wage >> day;

    gross_pay = hour * wage * day;

   cout << "payment : ";

   cout << gross_pay;

   return 0;
}
