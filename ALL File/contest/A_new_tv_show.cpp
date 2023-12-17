#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;

    while(1){

    cin >> n;

    float G = 0;


    for(float i = 1; i <= n;i++)
    {
        G = (G + (1/i));

    }
    cout << setprecision(13) << G << endl;
    }
return 0;
}
