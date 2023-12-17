#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double n;
    cin >> n;
    int k = n;
    double sum = 0;
    while(n--)
    {
        double a;
        cin >> a ;
        sum =sum + a;  
    }
    // double x  = sum / n;
    cout<< setprecision(12) << sum/k << endl;
}