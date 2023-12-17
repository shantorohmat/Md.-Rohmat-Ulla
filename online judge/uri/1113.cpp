#include <iostream>
using namespace std;

int main()
{
    while(1){

    int m,n;

    cin >> m >> n;

    if(m == n) { break; }

    if(m > n)
    {
        cout << "Decrescente" << endl;
    }
    else cout << "Crescente" << endl;
    }
    return 0;


}
