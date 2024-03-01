//
// Created by Олександр Пірожак on 01.03.2024.
//

#include "LongLong.h"
#include <iostream>
#include <sstream>

long LongLong::getOlder() const
{
    return older;
}

void LongLong::setOlder(long older)
{
    this->older = older;
}

long LongLong::getYounger() const
{
    return younger;
}

void LongLong::setYounger(long younger)
{
    this->younger = younger;
}

LongLong LongLong::subtract(LongLong num1, LongLong num2)
{
    LongLong result;
    result.older  = num1.older - num2.older;
    result.younger = num1.younger - num2.younger;

    if (result.younger < 0) {
        result.older -= 1;
        result.younger += (1L << 31);
    }

    return result;
}

//LongLong LongLong::divide(LongLong num1, LongLong num2)
//{
//
//}

bool LongLong::notBigger(LongLong num1, LongLong num2)
{
    if (num1.older < num2.older)
        return true;

    if (num1.older == num2.older)
        return num1.younger <= num2.younger;

    return false;
}

bool LongLong::areEqual(LongLong num1, LongLong num2)
{
    return num1.older == num2.older && num1.younger == num2.younger;
}

bool LongLong::areNotEqual(LongLong num1, LongLong num2)
{
    return !areEqual(num1, num2);
}

bool LongLong::Init(long older, long younger)
{
    if (younger < 0)
        return false;

    this->older = older;
    this->younger = younger;

    return true;
}

bool LongLong::Read()
{
    long older, younger;
    cout << "Enter older part: ";
    cin >> older;

    cout << "Enter younger part: ";
    cin >> younger;

    if (!Init(older, younger))
        return false;

    return true;
}

void LongLong::Display() const
{
    cout << toString() << endl;
}

string LongLong::toString() const
{
    stringstream sout;
    sout << "older = " << older << "; younger = " << younger;
    return sout.str();
}