#include <iostream>
#include <cmath>
#include "name.h"

using namespace std;

void function::Init(double f, int s)
{
    if (f == 0 && s <= 0)
    {
        cout << "Error: incorrect arguments!" << endl;
        this->first = 0;
        this->second = 1;
        return;
    }

    this->first = f;
    this->second = s;
}

void function::Read()
{
    double f;
    int s;
    cout << "Input first: ";
    cin >> f;
    cout << "Input second: ";
    cin >> s;
    Init(f, s);
}

void function::Display()
{
    cout << "first = " << this->first << ", second = " << this->second << endl;
}

double function::power()
{
    return pow(this->first, this->second);
}