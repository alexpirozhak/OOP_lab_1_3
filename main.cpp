#include <iostream>
#include "LongLong.h"

int main()
{
    LongLong num1;
    LongLong num2;
    num1.Init(123, 456);

    cout << "num1: ";
    num1.Display();

    if (num2.Read())
    {
        if (LongLong::areEqual(num1, num2))
            cout << "num1 == num2" << endl;
        if (LongLong::areNotEqual(num1, num2))
            cout << "num1 != num2" << endl;
        if (LongLong::notBigger(num1, num2))
            cout << "num1 <= num2" << endl;

        cout << "num1 - num2: "
            << LongLong::subtract(num1, num2).toString() << endl;
    }
    else
     cout << "" << endl;

    return 0;
}
