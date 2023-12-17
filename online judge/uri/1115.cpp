#include <iostream>
using namespace std;

int main()
{
    while(1){
    int m,n;

    cin >> m >> n;

    if(m == 0 || n == 0) { break; }

    else if(m > 0 && n > 0)
    {
        cout << "primeiro" << endl;
    }
    else if(m < 0 && n > 0)
    {
        cout << "segundo" << endl;
    }
    else if(m < 0 && n < 0)
    {
        cout << "terceiro" << endl;
    }
    if(m > 0 && n < 0)
    {
        cout << "quarto" << endl;
    }
    }
    return 0;


}
