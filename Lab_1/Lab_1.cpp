#include <iostream>
#include "name.h"

using namespace std;

int main()
{
    function B;
    B.Read();
    B.Display();
    cout << "Result B: " << B.power() << endl;

    return 0;
}