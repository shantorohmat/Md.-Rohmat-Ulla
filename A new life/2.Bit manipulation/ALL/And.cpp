#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int a = n & (m - 1);
    cout<< "BitWise AND : " << a << endl;


    int b = n | m;
    cout << "BitWise OR : " << b << endl;

    int c = n ^ m;
    cout <<"Bitwise XOR : " <<  c << endl;
    cout << "Bitwise NOT : " << endl;
    cout << n << " : " << ~n << endl;
    cout << m << " : " << ~m << endl;

    cout << "Sum : " << n + m << endl;
    cout << "minus : " << n - m << endl;

}
/// The & (bitwise AND) in C or C++ takes two numbers as operands and does AND on every
/// bit of two numbers. The result of AND is 1 only if both bits are 1.


/// in C or C++ takes two numbers as operands and does XOR on every bit of two numbers.
/// The result of XOR is 1 if the two bits are different.


///The | (bitwise OR) in C or C++ takes two numbers as operands and does OR on every
///bit of two numbers. The result of OR is 1 if any of the two bits is 1.
