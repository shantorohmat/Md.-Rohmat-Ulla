#include <bits/stdc++.h>
using namespace std;

int rect(int length = 0,int height = 0)
{
    if(height == 0 || length == 0) { length = height;}
    return length * height;

}



int main()
{
    cout << " 10 x 5 rectangle has area : " << endl;

    cout << rect(10,5) << endl;

    cout << " 10 X 10 rectangle has area : " << endl;

    cout << rect(10);

    return 0;

}
