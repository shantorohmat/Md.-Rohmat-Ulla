#include<iostream>
using namespace std;

int main()
{
    int i = 1000;
    while(i > 0)
    {

     for( int count = 0;count < 5;count++)
        {
          cout << i << '\t';
          i--;
        }
     cout  << endl;
    }
 return    0;
}
