#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
    int x[10], n, a, c, m, i, j;
    float r[10];

    cout << "enter the number of random nunmber to generate: ";
    cin >> n;

    cout << "enter the value of seed x: ";
    cin >> x[0];

    cout << "\nenterr the value of a: ";
    cin >> a;

    cout << "enterr the value of c: ";
    cin >> c;
    
    cout << "enterr the value of m: ";    
    cin >> m;

    i = 0;

    r[0] = (float)x[0] / m;
    if(a == 1)
    {
        cout << "\n addiive lcg: ";
        do
        {
            /* code */
            x[i + 1] = (x[i] + c) % m;
            r[i + 1] = (float)x[i + 1] / m;
            i++;
        } while(i <= n);
    }
    else if(c == 0)
    {
        cout << "\nmultiplicattive lcg: ";
        do
        {
            /* code */
            x[i + 1] = (a * x[i]) % m;
            r[i + 1] = (float)x[i + 1] / m;
            i++;
        } while (i <= n);        

    }
    else
    {
        cout << "\nmixed lcg: ";
        do
        {
            /* code */
            x[i + 1] = (a * x[i] + c) % m;
            r[i + 1] = (float)x[i + 1] / m;
            i++;
        } while (i <= n);        

    }

    cout << "\nthus the obttained random numbers are: ";
    for(j = 0; j < i; j++)
        cout << "\n" << r[j];

    getch();

    return 0;
}