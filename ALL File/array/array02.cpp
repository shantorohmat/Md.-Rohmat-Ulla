#include<iostream>
using namespace std;

int main()
{
    int s1[4][4] ={{11,12,13,14},{13,14,18,16},{52,54,58,56},{0,0,0,0}} ;

    int row,col;


        for(col = 0;col < 4;col++)
        {
            s1[3][col] = s1[0][col]/4.0 + s1[1][col]/4.0 + s1[2][col]/4.0;

            cout << "Roll : " << col+1  << '\t' << s1[3][col]<< endl;
        }
        cout << endl;

}
