#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ofstream out("exam.txt");

    if(!out){
        cout << "cannot open output file" << endl;
        return 1;
    }

    char str[100];

    cout << "writing string disk, '$'  to stop " << endl;

    while(*str != '$')
    {
        cout << ": ";
         cin >> str;
         out << str  << " ";
    }

        out.close();

        return 0;



}

