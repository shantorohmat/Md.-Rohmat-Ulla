#include <iostream>
using namespace std;

int main()
{
    int s[5];

    int count = 0,count_1 = 0,count_2 = 0,count_3 = 0;

    for(int i = 0;i < 5;i++)
    {
        cin >> s[i];
    }

    for(int i = 0;i < 5;i++)
    {
        if(s[i] % 2 == 0)
        {
            count ++;
        }
        if(s[i] % 2 != 0)
        {
                count_1++;
        }
        if(0 < s[i])
        {
                count_2++;
        }
        if(0 > s[i])
        {
            count_3++;
        }
    }

    cout << count   << " valor(es) par(es)"<< endl;
    cout << count_1 << " valor(es) impar(es)" << endl;
    cout << count_2 << " valor(es) positivo(s)" << endl;
    cout << count_3 << " valor(es) negativo(s)" << endl;


    return 0;
}
