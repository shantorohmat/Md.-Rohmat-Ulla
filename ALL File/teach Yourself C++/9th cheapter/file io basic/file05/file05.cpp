#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    ofstream out("exam.txt",ios :: out |ios :: binary);

    if(!out)
    {
        cout << "out put file can't open" << endl;
        return 1;
    }

    double num = 100.254;

    char str[] = "This is my file";

    out.write((char *) &num,sizeof(double));
    out.write(str,strlen(str));

    out.close();

    return 0;
}
