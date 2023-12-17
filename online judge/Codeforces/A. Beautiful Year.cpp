#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(1){
    n++;
    int a = n / 1000;
    //cout << a << endl;
    int b = (n%1000) / 100;
    //cout << b << endl;
    int c = (n%100) / 10;
    //cout << c << endl;
    int d = (n % 100) % 10;
    //cout << d << endl;
    if(a != b && a != c && a != d && a != b && b != c && b != d  && a != c && b != c && c != d  && a != d && d != c && b != d ) break;
    }
    cout << n << endl;
}
