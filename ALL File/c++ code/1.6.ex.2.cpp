#include<iostream>
using namespace std;

int sum ( int x ,int y);

int main()
{
    int a,b,c,t;

    cout << "Enter the test case : ";

    cin >> t;

    for(int i = 1; i <= t;i++){

    cout << "Enter the two number : ";

    cin >> a >> b;

    c = sum(a,b);

    cout << "the sum of two number : " << c  << endl ;

    }

    return 0;
}

 sum ( int x ,int y)
{
    return (x + y);
}
