#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int row,col;
    char  saarc[7][100] = { "Bangladesh", "India", "Pakistan", "SriLanka", "Nepal", "Bhutan", "Maldives" };

    for( row = 0; row < 7;row++)
    {
        int name_length = strlen(saarc[row]);

        for( col = 0;col < name_length;col++){
        cout << row << "," << col << " = " << saarc[row][col] << '\t' ;}
        cout << endl;
    }
}
