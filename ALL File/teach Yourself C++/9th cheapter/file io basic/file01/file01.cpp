#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("exam.txt");

    if(!fout){
        cout << "can't open out put file "<< endl;
        return 1;
    }

    fout << "hello!" << endl;
    fout <<  100 << " " << hex << 100 << endl;

    fout.close();

    ifstream fin("exam.txt");

    if(!fin){
        cout << "can't open input file" << endl;
        return 1;
    }

    char s[100];

    int i,sp;

    fin >> s >> i >> sp ;

    cout << s << " " << i << " "<< sp << endl;

    fin.close();

    return 0;
}
