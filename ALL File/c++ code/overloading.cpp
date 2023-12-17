#include<iostream>
using namespace std;

int abs(int n);

long abs(long n);

double abs(double n);


    int main()
    {
        cout << "Absolute value of -10I :" << abs(-10) << endl;

        cout << "Absolute value of -10L :" << abs ( -10L) << endl;

        cout << "Absolute value of -10.025 :" << abs (-10.025) << endl;

        return 0;
    }
   int abs(int n)
   {
       cout << "Integer vale :  " << endl ;
       return  n < 0 ? -n : n;
   }
   long abs(long n)
   {
       cout << "Long integer value :   "  << endl;
       return n < 0 ? -n : n;
   }

   double abs( double n)
   {
       cout << " Floating point Value : "<< endl;
       return n < 0 ? -n : n;
   }
