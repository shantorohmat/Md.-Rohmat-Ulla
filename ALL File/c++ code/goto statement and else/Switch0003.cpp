#include <iostream>
using  namespace std;

int main()
{
    double temp;

    cin >> temp;

    if(temp < 0)
        cout << "ICE" << endl;
    else if(temp > 0  && temp < 100 )
        cout << "WATER" << endl;
    else if(temp > 100)
        cout << "STREAM" << endl;

    return 0;
}
