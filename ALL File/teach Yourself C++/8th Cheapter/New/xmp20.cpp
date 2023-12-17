#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << dec << 0x56 << endl;

    cout << hex << 45 << endl;

    cout << setw(5) << setfill('*') << dec << 45 << endl;

     cout << setw(5) << setfill('*') << dec << left << 45 << endl;
}

