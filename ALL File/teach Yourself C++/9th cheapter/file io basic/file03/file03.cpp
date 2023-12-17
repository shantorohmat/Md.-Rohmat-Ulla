#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("exam.txt");

    ofstream fout ("exam.txt");

    if(!fout)
    {
        cout << "can't open output file " << endl;
        return 1;
    }

    if(!fin)
    {
        cout << "can't open input file " << endl;
        return 1;
    }

    char ch[100];

    for(int i = 0;i < 20;i++){
        cin >> ch[i];
        fout << ch[i] << " ";
    }




    fin.close();
    fout.close();

    return 0;
}
