/// page 6.50
///6.12

#include <iostream>
using namespace std;

int main()
{
    int flag;

    cin >> flag;

    switch(flag)
    {
    case 1:
        cout << "HOT" << endl;
        break;
    case 2:
        cout << "LUKE WARM" << endl;
        break;
    case 3:
        cout << "COLD" << endl;
        break;
     default:
        cout << "OUT OF RANGE" << endl;
        break;
    }
   return 0;

}
