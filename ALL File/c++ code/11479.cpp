#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c;

    cin >> t;

    for(int i = 0;i < t;i++)
    {
        cin >> a >> b >> c ;





        if(((c*c) < (b*b + a*a))) //|| ((b*b) < (c*c + a*a)) || ((c*c) < (b*b + a*a)))
        {

            if(a == b == c)
            {
                cout << "Equilateral" <<endl;
            }
            if(a == b  && c == c)//|| b == c || a == c)
            {
                cout << "Isosceles" << endl;
            }
            else{
                cout << "Scalene" << endl;
        }
        }
        else
        {

            cout << "Invalid" << endl;
        }
    }
    return 0;
}
