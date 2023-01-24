#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
    FILE *fp;
    int i;
    float q, s, dp, sp, ds, ss, p;
    fp = fopen("sim.xls", "w+");
    // fp = fopen("C:\\Users\\Dell\\Desktop\\sim\\sim.xls", "w+");


    cout << "\nEnter the value of demand price (dp)\n";
    cin >> dp;

    cout << "\nEnter the value of supply price (sp)\n";
    cin >> sp;

    cout << "\nEnter the value of demand slope (ds)\n";
    cin >> ds;

    cout << "\nEnter the value of supply slope (ss)\n";
    cin >> ss;

    cout << "\nEnter the value of inital price (p)\n";
    cin >> p;

    for(i = 1; i <= 10; i += 1)
    {
        q = dp - (ds * p);
        s = sp - (ss * p);
        p++;
        fprintf(fp, "%f\t%f\n", q, s);

        if(q == s)
        {
            cout << "Equilibirium price is = " << p;
        }
    }


    fclose(fp);
    return 0;
}