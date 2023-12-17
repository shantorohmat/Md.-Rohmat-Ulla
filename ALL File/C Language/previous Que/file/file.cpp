#include <iostream>
using namespace std;

struct student{
    char nm[100],id[100],gm[100];
    int n;
    double m[100];
};
void addInfo()
{
    int n = 3;

   FILE *in;
    //FILE *out;
    in = fopen("input.txt", "r");
    //out = fopen("output.txt", "w");
    int i = 0;
    student s[10];
    while(n--){
    fscanf(in," %[^\n]",s[i].nm);
    fscanf(in," %[^\n]",s[i].id);
    fscanf(in," %[^\n]",s[i].gm);
    fscanf(in," %d\n",&s[i].n);

    for(int j= 0;j < s[i].n;j++)
    fscanf(in," %lf",&s[i].m[j]);

    i++;
    }



}

void showInfo()
{
    //FILE *in;
    FILE *out;
    //in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    student s[10];
    int n =3;
    int i = 0;
    while(n--){
    printf("%s\n",s[i].nm);
    printf("%s\n",s[i].id);
    printf("%s\n",s[i].gm);

    fprintf(out,"%s\n",s[i].nm);
    fprintf(out,"%s\n",s[i].id);
    fprintf(out,"%s\n",s[i].gm);

    printf("%d\n",s[i].n);
    fprintf(out,"%d\n",s[i].n);
    //int i = 0;
    for(int j = 0;j < s[i].n;j++)
    {
        fprintf(out,"%lf\n",s[i].m[j]);
        printf("%lf ",s[i].m[j]);
    }
    printf("\n");
    //i++;

    }




}
int main()
{



    addInfo();
    showInfo();


}
