#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
    float v, r1, r2, r3, i1, i2, i3, i, r, eqi;
    int n;
    
    FILE *fp;

    fp = fopen("kirchh.xls", "w+");

    cout << endl << "input three resistance values: ";
    cin >> r1 >> r2 >> r3;

    cout << endl << "input voltage: ";
    cin >> v;

    fprintf(fp, "\ti\t\t\ti1\t\t\ti2\t\t\ti3\n");
    for (n = 0; n <= 5; n++)
    {
        i1 = v / r1;
        i2 = v / r2;
        i3 = v / r3;

        i = i1 + i2 + i3;

        r = (r1 * r2 * r3) / ((r2 * r3) + (r1 * r2) + (r1 * r3));

        eqi = v / r;

           cout << endl << "i: " << i << "\ti1:"<< i1 << "\ti2:" << i2 << "\ti3:" << i3 << "\tieqi:" << eqi;

        fprintf(fp, "%f\t%f\t%f\t%f\n", i, i1, i2, i3);

        v++;
    }
    
    fclose(fp);
    getch();

    return 0;
}