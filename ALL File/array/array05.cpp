#include <iostream>
using namespace std;

int main()
{
    int s1[4][4] = { {4,5,6,7}, {7,8,9,5}, {8,4,6,9} };

    int row,col,sum;

    for(col = 0;col < 4;col++)
    {
        sum = 0;
        for(row = 0;row < 4;row++)
        {
            sum = sum + s1[row][col];
        }
        cout << sum << endl;
    }
}
