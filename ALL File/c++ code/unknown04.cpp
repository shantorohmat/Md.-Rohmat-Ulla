#include<iostream>
#include<cmath>
using namespace std;

int  sroot(int sq);
long sroot(long sq);
double sroot(double sq);

int main()
{
    cout << sroot(90.34)<< endl;
    cout << sroot(90L)<<endl;
    cout << sroot(90) << endl;

    return 0;
}

int sroot(int sq)
{
    return  (long)sqrt((double)sq);
}

double sroot(double sq)
{
    return  sqrt(  sq);
}

long sroot(long sq)
{
    return   (long) sqrt((double)sq) ;
}
