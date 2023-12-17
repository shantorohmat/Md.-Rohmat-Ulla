#include <iostream>
using namespace std;
struct student{
    char *nm,*id,*gm;
    int s,m;
};
void addInfo()
{
    student s;
    scanf("%[^\n]",s.nm);
    printf("%s",s.nm);


}

void showInfo()
{
    student s;


}
int main()
{
    freopen("input.txt","r");

    addInfo();
    showInfo();

}
