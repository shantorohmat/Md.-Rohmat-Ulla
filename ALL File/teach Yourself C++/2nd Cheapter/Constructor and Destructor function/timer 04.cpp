#include <bits/stdc++.h>
#include <ctime>
using namespace std;

class timer
{
    clock_t start;

public :

    timer();
    ~timer();
};

timer:: timer()
{
    start = clock();
}

timer :: ~timer()
{
    clock_t end;

    end = clock();

    cout << "Elapsed time : " << (end-start) / CLOCKS_PER_SEC << endl;
}

int main()
{
    timer ob;

    string c;

    string f;

    cout << "press a key followed by enter : " <<endl;

    cin >> c >> f;

    return 0;
}



