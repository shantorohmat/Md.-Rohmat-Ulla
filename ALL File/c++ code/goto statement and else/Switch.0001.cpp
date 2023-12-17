/// page 6.50
///6.13

#include <iostream>
using namespace std;

int main()
{
    char flag;

    cin >> flag;

    switch(flag)
    {
    case 'r':
        cout << "RED" << endl;
        break;
    case 'R':
        cout << "RED" << endl;
        break;
    case 'G':
        cout << "GREEN" << endl;
        break;
        case 'g':
        cout << "GREEN" << endl;
        break;
    case 'B':
        cout << "BLUE" << endl;
        break;
    case 'b':
        cout << "BLUE" << endl;
        break;
     default:
        cout << "BLACK" << endl;
        break;
    }
   return 0;

}


