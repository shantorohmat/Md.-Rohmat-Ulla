#include <bits/stdc++.h>
using namespace std;

inline int abs(int a);
double abs(double a);
long int abs(long int a);

int main()
{
    cout << abs(-102) << endl;
    cout <<  abs(10)<< endl;
    cout << abs(-15485415317854781) << endl;

}

int abs(int a)
{
    cout << "int " ;
  return(a < 0 ? -a : a) ;
}
double abs(double a)
{
    cout << "double ";
     return(a < 0 ? -a : a);
}
long int abs(long int a)
{
    cout << "long ";
   return(a < 0 ? -a : a);
}
