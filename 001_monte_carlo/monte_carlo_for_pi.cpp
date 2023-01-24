#include<iostream>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    //clrscr();

    int m, n = 0, i, r;
    float x, y, f, pie, e1;

    cout << "\n enter number of experiments: ";
    cin >> m;

    cout << "\n enter the radius: ";
    cin >> r;

    for(i = 0; i <= m; i++)
    {
        x = rand() % r;
        y = rand() % r;
        f = pow(x,2) + pow(y,2) - pow(r,2);
        if(f <= 0)
            n++;
    }

    pie = 4 * (float)n / (float)m;
    cout << "\n the value of pi is: " << pie;

    e1 = ((3.14 - pie) / 3.14) * 100;

    cout << "\n error percentage = " << e1;
    
    getch();

    return 0;
} 