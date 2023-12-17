#include<iostream>
using namespace std;

int main()
{
    int s1[4][4] = { {4,5,6,7},{8,9,6,8}, {7,4,3,1}};

    int row,col;
    int sum;

    for(row = 0; row < 4;row++)
    {
                    sum    = 0;

        for(col = 0; col < 4; col++)
        {


            sum = sum + s1[row][col];

        }
                    cout << sum << "\t";
                    cout << endl;
    }
}
