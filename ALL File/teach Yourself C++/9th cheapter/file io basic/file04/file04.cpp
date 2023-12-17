#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("exam.txt",  ios :: binary);

    if(!fout)
    {
        cout << "can't open file" << endl;
        return 1;
    }

    char ch;

    while(ch != '$')
    {

        cout <<": ";
        cin.get(ch);
        fout.put(ch);
    }
    fout.close();

    return 0;
}
